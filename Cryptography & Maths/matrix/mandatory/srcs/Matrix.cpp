/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/29 12:00:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add matrix
Matrix &Matrix::operator+=(const Matrix &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) += other[i];
	return *this;
}
// subtract matrix
Matrix &Matrix::operator-=(const Matrix &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) -= other[i];
	return *this;
}
// scale matrix by a scalar
Matrix &Matrix::operator*=(const float &scalar)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) *= scalar;
	return *this;
}

/* ************************************************************************** */
/*                                    EX07                                    */
/* ************************************************************************** */

// multiply matrix by a vector
Vector Matrix::mul_vec(const Vector &vector)
{
	Vector result;
	for (size_t i = 0; i < this->size(); i++)
		result.push_back(this->at(i).dot(vector));
	return result;
}
// multiply matrix by a matrix
Matrix Matrix::mul_mat(const Matrix &matrix)
{
	Matrix a = *this, b = matrix, c;
	m_shape aShape = Utils::matrix_shape(a), bShape = Utils::matrix_shape(b);
	size_t m = aShape.first, n = aShape.second, p = bShape.second;
	for (size_t i = 0; i < m; i++)
	{
		Vector u;
		for (size_t j = 0; j < p; j++)
		{
			float tmp = 0;
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
float Matrix::trace(void) const
{
	float result = 0;
	for (size_t i = 0; i < this->size(); i++)
		result += this->at(i)[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX09                                    */
/* ************************************************************************** */

// transpose
Matrix Matrix::transpose(void)
{
	m_shape localShape = Utils::matrix_shape(*this);
	Matrix result;
	for (size_t i = 0; i < localShape.second; i++)
	{
		Vector tmp;
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
ssize_t Matrix::firstNonZeroPos(const Vector &line)
{
	for (size_t i = 0; i < line.size(); i++)
		if (line[i] != 0)
			return i;
	return -1;
}
// sort the rows by the first non-zero element (private helper function)
void Matrix::sortTheRowsByTheFirstNonZeroElement(Matrix &matrix)
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
void Matrix::resetToZeroTheValuesBelowEachPivot(Matrix &matrix)
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
void Matrix::resetToZeroTheValuesAboveEachPivot(Matrix &matrix)
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
void Matrix::normalizeThePivotValues(Matrix &matrix)
{
	m_shape shape = Utils::matrix_shape(matrix);
	for (size_t i = 0; i < shape.first; i++)
	{
		ssize_t pivotPos = this->firstNonZeroPos(matrix[i]);
		if (pivotPos == -1)
			continue;
		matrix[i] *= 1 / matrix[i][pivotPos];
	}
}
// row-echelon form
Matrix Matrix::row_echelon(void)
{
	Matrix result(*this);
	this->resetToZeroTheValuesBelowEachPivot(result);
	this->resetToZeroTheValuesAboveEachPivot(result);
	this->normalizeThePivotValues(result);
	return result;
}

/* ************************************************************************** */
/*                                    EX11                                    */
/* ************************************************************************** */

// minor matrix (private helper function)
Matrix Matrix::minor_matrix(const size_t &i, const size_t &j)
{
	m_shape shape = Utils::matrix_shape(*this);
	Matrix extracted;
	for (size_t k = 0; k < shape.first; k++)
	{
		if (k == i)
			continue;
		Vector tmp;
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
float Matrix::determinant(void)
{
	m_shape shape = Utils::matrix_shape(*this);
	if (shape.first == 2 && shape.second == 2)
		return this->at(0)[0] * this->at(1)[1] - this->at(0)[1] * this->at(1)[0];
	float result = 0;
	for (size_t j = 0; j < shape.second; j++)
	{
		Matrix extract = this->minor_matrix(0, j);
		float det = extract.determinant();
		if (det != 0)
			det *= -1 + 2 * (j % 2 == 0);
		result += this->at(0)[j] * det;
	}
	return result;
}

/* ************************************************************************** */
/*                                    EX12                                    */
/* ************************************************************************** */

// inverse
Matrix Matrix::inverse(void)
{
	m_shape shape = Utils::matrix_shape(*this);
	Matrix result;
	for (size_t i = 0; i < shape.first; i++)
	{
		Vector tmp;
		for (size_t j = 0; j < shape.second; j++)
		{
			Matrix extract = this->minor_matrix(i, j);
			float det = extract.determinant();
			if (det != 0)
				det *= -1 + 2 * (i == j || i == shape.second - j - 1);
			tmp.push_back(det);
		}
		result.push_back(tmp);
	}
	result = result.transpose();
	result *= 1 / this->determinant();
	return result;
}
