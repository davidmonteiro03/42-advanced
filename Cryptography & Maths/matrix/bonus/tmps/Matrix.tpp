/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 16:32:38 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add matrix
template <typename R>
Matrix<R> &Matrix<R>::operator+=(const Matrix<R> &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) += other[i];
	return *this;
}
// subtract matrix
template <typename R>
Matrix<R> &Matrix<R>::operator-=(const Matrix<R> &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) -= other[i];
	return *this;
}
// scale matrix by a scalar
template <typename R>
Matrix<R> &Matrix<R>::operator*=(const R &scalar)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) *= scalar;
	return *this;
}

/* ************************************************************************** */
/*                                    EX07                                    */
/* ************************************************************************** */

// multiply matrix by a vector
template <typename R>
Vector<R> Matrix<R>::mul_vec(const Vector<R> &vector)
{
	Vector<R> result;
	for (size_t i = 0; i < this->size(); i++)
		result.push_back(this->at(i).dot(vector));
	return result;
}
// multiply matrix by a matrix
template <typename R>
Matrix<R> Matrix<R>::mul_mat(const Matrix<R> &matrix)
{
	Matrix<R> a = *this, b = matrix, c;
	m_shape aShape = Utils::matrix_shape(a), bShape = Utils::matrix_shape(b);
	size_t m = aShape.first, n = aShape.second, p = bShape.second;
	for (size_t i = 0; i < m; i++)
	{
		Vector<R> u;
		for (size_t j = 0; j < p; j++)
		{
			R tmp = static_cast<R>(0);
			for (size_t k = 0; k < n; k++)
				tmp += a[i][k] * b[k][j];
			u.push_back(tmp);
		}
		c.push_back(u);
	}
	return c;
}

/* ************************************************************************** */
/*                                    EX08                                    */
/* ************************************************************************** */

// trace
template <typename R>
R Matrix<R>::trace(void) const
{
	R result = static_cast<R>(0);
	for (size_t i = 0; i < this->size(); i++)
		result += this->at(i)[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX09                                    */
/* ************************************************************************** */

// transpose
template <typename R>
Matrix<R> Matrix<R>::transpose(void)
{
	m_shape localShape = Utils::matrix_shape(*this);
	Matrix<R> result;
	for (size_t i = 0; i < localShape.second; i++)
	{
		Vector<R> tmp;
		for (size_t j = 0; j < localShape.first; j++)
			tmp.push_back(this->at(j)[i]);
		result.push_back(tmp);
	}
	return result;
}

/* ************************************************************************** */
/*                                    EX10                                    */
/* ************************************************************************** */

// get the first non-zero element position (private helper function)
template <typename R>
ssize_t Matrix<R>::firstNonZeroPos(const Vector<R> &line)
{
	for (size_t i = 0; i < line.size(); i++)
		if (line[i] != static_cast<R>(0))
			return i;
	return -1;
}
// sort the rows by the first non-zero element (private helper function)
template <typename R>
void Matrix<R>::sortTheRowsByTheFirstNonZeroElement(Matrix<R> &matrix)
{
	m_shape shape = Utils::matrix_shape(matrix);
	std::vector<ssize_t> pivots_poss;
	for (size_t i = 0; i < shape.first; i++)
		pivots_poss.push_back(this->firstNonZeroPos(matrix[i]));
	for (size_t i = 0; i < shape.first; i++)
	{
		for (size_t j = i + 1; j < shape.first; j++)
		{
			if (pivots_poss[j] == -1)
				continue;
			if (pivots_poss[i] == -1 || pivots_poss[i] > pivots_poss[j])
			{
				std::swap(pivots_poss[i], pivots_poss[j]);
				std::swap(matrix[i], matrix[j]);
			}
		}
	}
}
// reset to zero the values below each pivot (private helper function)
template <typename R>
void Matrix<R>::resetToZeroTheValuesBelowEachPivot(Matrix<R> &matrix)
{
	this->sortTheRowsByTheFirstNonZeroElement(matrix);
	m_shape shape = Utils::matrix_shape(matrix);
	for (size_t j = 0; j < shape.second; j++)
	{
		for (size_t i = j + 1; i < shape.first; i++)
		{
			ssize_t currPivotPos = this->firstNonZeroPos(matrix[i]),
					prevPivotPos = this->firstNonZeroPos(matrix[j]);
			if (currPivotPos == prevPivotPos)
				matrix[i] = matrix[i] * matrix[j][prevPivotPos] - matrix[j] * matrix[i][currPivotPos];
		}
	}
	this->sortTheRowsByTheFirstNonZeroElement(matrix);
}
// reset to zero the values above each pivot (private helper function)
template <typename R>
void Matrix<R>::resetToZeroTheValuesAboveEachPivot(Matrix<R> &matrix)
{
	this->sortTheRowsByTheFirstNonZeroElement(matrix);
	m_shape shape = Utils::matrix_shape(matrix);
	for (size_t i = 0; i < shape.first; i++)
	{
		for (size_t j = i + 1; j < shape.first; j++)
		{
			ssize_t pivotPos = this->firstNonZeroPos(matrix[j]);
			if (pivotPos == -1)
				continue;
			matrix[i] = matrix[i] * matrix[j][pivotPos] - matrix[j] * matrix[i][pivotPos];
		}
	}
	this->sortTheRowsByTheFirstNonZeroElement(matrix);
}
// normalize the pivot values (private helper function)
template <typename R>
void Matrix<R>::normalizeThePivotValues(Matrix<R> &matrix)
{
	m_shape shape = Utils::matrix_shape(matrix);
	for (size_t i = 0; i < shape.first; i++)
	{
		ssize_t pivotPos = this->firstNonZeroPos(matrix[i]);
		if (pivotPos == -1)
			continue;
		matrix[i] *= static_cast<R>(1) / matrix[i][pivotPos];
	}
}
// row-echelon form
template <typename R>
Matrix<R> Matrix<R>::row_echelon(void)
{
	Matrix<R> result(*this);
	this->resetToZeroTheValuesBelowEachPivot(result);
	this->resetToZeroTheValuesAboveEachPivot(result);
	this->normalizeThePivotValues(result);
	return result;
}

/* ************************************************************************** */
/*                                    EX11                                    */
/* ************************************************************************** */

// minor matrix (private helper function)
template <typename R>
Matrix<R> Matrix<R>::minor_matrix(const size_t &i, const size_t &j)
{
	m_shape shape = Utils::matrix_shape(*this);
	Matrix<R> extracted;
	for (size_t k = 0; k < shape.first; k++)
	{
		if (k == i)
			continue;
		Vector<R> tmp;
		for (size_t l = 0; l < shape.first; l++)
		{
			if (l == j)
				continue;
			tmp.push_back(this->at(k)[l]);
		}
		extracted.push_back(tmp);
	}
	return extracted;
}
// determinant
template <typename R>
R Matrix<R>::determinant(void)
{
	m_shape shape = Utils::matrix_shape(*this);
	if (shape.first == 2 && shape.second == 2)
		return this->at(0)[0] * this->at(1)[1] - this->at(0)[1] * this->at(1)[0];
	R result = static_cast<R>(0);
	for (size_t j = 0; j < shape.second; j++)
	{
		Matrix extract = this->minor_matrix(0, j);
		R det = extract.determinant();
		if (det != static_cast<R>(0))
			det *= static_cast<R>(-1) + static_cast<R>(2) * static_cast<R>(j % 2 == 0);
		result += this->at(0)[j] * det;
	}
	return result;
}

/* ************************************************************************** */
/*                                    EX12                                    */
/* ************************************************************************** */

// inverse
template <typename R>
Matrix<R> Matrix<R>::inverse(void)
{
	m_shape shape = Utils::matrix_shape(*this);
	Matrix<R> result;
	for (size_t i = 0; i < shape.first; i++)
	{
		Vector<R> tmp;
		for (size_t j = 0; j < shape.second; j++)
		{
			Matrix<R> extract = this->minor_matrix(i, j);
			R det = extract.determinant();
			if (det != static_cast<R>(0))
				det *= static_cast<R>(-1) + static_cast<R>(2) * static_cast<R>(i == j || i == shape.second - j - 1);
			tmp.push_back(det);
		}
		result.push_back(tmp);
	}
	result = result.transpose();
	result *= static_cast<R>(1) / this->determinant();
	return result;
}

/* ************************************************************************** */
/*                                    EX13                                    */
/* ************************************************************************** */

// rank
template <typename R>
size_t Matrix<R>::rank(void)
{
	Matrix<R> reduced = this->row_echelon();
	m_shape shape = Utils::matrix_shape(reduced);
	for (size_t i = 0; i < shape.first; i++)
		if (this->firstNonZeroPos(reduced[i]) == -1)
			return i;
	return shape.first;
}
