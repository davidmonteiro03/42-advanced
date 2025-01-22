/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:26:55 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 20:14:09 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template <typename R>
Matrix<R> &Matrix<R>::operator+=(const Matrix<R> &v)
{
	Matrix<R> &u = *this;
	const shape_t uShape = matrix::utils::shape(u),
				  vShape = matrix::utils::shape(v);
	if (uShape != vShape)
		throw std::invalid_argument("Matrix dimensions must be equal");
	for (size_t i = 0; i < uShape.first; i++)
		u[i] += v[i];
	return *this;
}

template <typename R>
Matrix<R> &Matrix<R>::operator-=(const Matrix<R> &v)
{
	Matrix<R> &u = *this;
	const shape_t uShape = matrix::utils::shape(u),
				  vShape = matrix::utils::shape(v);
	if (uShape != vShape)
		throw std::invalid_argument("Matrix dimensions must be equal");
	for (size_t i = 0; i < uShape.first; i++)
		u[i] -= v[i];
	return *this;
}

template <typename R>
Matrix<R> &Matrix<R>::operator*=(const R &a)
{
	Matrix<R> &u = *this;
	const shape_t uShape = matrix::utils::shape(u);
	for (size_t i = 0; i < uShape.first; i++)
		u[i] *= a;
	return *this;
}

template <typename R>
Vector<R> Matrix<R>::operator*(const Vector<R> &vec) const
{
	const Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	const size_t vecSize = vector::utils::size(vec);
	if (matShape.second != vecSize)
		throw std::invalid_argument("The number of columns in the matrix must be equal to the size of the vector");
	Vector<R> result(matShape.first);
	for (size_t i = 0; i < matShape.first; i++)
	{
		result[i] = 0;
		for (size_t j = 0; j < matShape.second; j++)
			result[i] += vec[j] * mat[i][j];
	}
	return result;
}

template <typename R>
Matrix<R> Matrix<R>::operator*(const Matrix<R> &mat) const
{
	const Matrix<R> &self = *this;
	const shape_t selfShape = matrix::utils::shape(self);
	const shape_t matShape = matrix::utils::shape(mat);
	if (selfShape.first != matShape.second || selfShape.second != matShape.first)
		throw std::invalid_argument("The number of columns in the first matrix must be equal to the number of rows in the second matrix and vice versa");
	Matrix<R> result(selfShape.first);
	for (size_t i = 0; i < selfShape.first; i++)
	{
		result[i] = Vector<R>(matShape.second);
		for (size_t j = 0; j < matShape.second; j++)
		{
			result[i][j] = 0;
			for (size_t k = 0; k < selfShape.first; k++)
				result[i][j] += self[i][k] * mat[k][j];
		}
	}
	return result;
}

template <typename R>
R Matrix<R>::trace(void) const
{
	const Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	if (matShape.first != matShape.second)
		throw std::invalid_argument("The matrix must be square");
	R result = 0;
	for (size_t i = 0; i < matShape.first; i++)
		result += mat[i][i];
	return result;
}

template <typename R>
Matrix<R> Matrix<R>::transpose(void) const
{
	const Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	Matrix<R> result(matShape.second);
	for (size_t i = 0; i < matShape.second; i++)
	{
		result[i] = Vector<R>(matShape.first);
		for (size_t j = 0; j < matShape.first; j++)
			result[i][j] = mat[j][i];
	}
	return result;
}

template <typename R>
ssize_t Matrix<R>::firstNonZeroPos(const Vector<R> &row)
{
	const size_t rowSize = vector::utils::size(row);
	for (size_t i = 0; i < rowSize; i++)
		if (row[i] != 0)
			return i;
	return -1;
}

template <typename R>
void Matrix<R>::sortTheRowsByTheFirstNonZeroElement(void)
{
	Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	std::vector<ssize_t> pivotsPoss(matShape.first);
	for (size_t i = 0; i < matShape.first; i++)
		pivotsPoss[i] = firstNonZeroPos(mat[i]);
	for (size_t i = 0; i < matShape.first; i++)
	{
		for (size_t j = i + 1; j < matShape.first; j++)
		{
			if (pivotsPoss[i] > pivotsPoss[j])
			{
				std::swap(pivotsPoss[i], pivotsPoss[j]);
				std::swap(mat[i], mat[j]);
			}
		}
	}
}

template <typename R>
void Matrix<R>::resetToZeroTheValuesBelowEachPivot(void)
{
	Matrix<R> &mat = *this;
	mat.sortTheRowsByTheFirstNonZeroElement();
	const shape_t matShape = matrix::utils::shape(mat);
	for (size_t j = 0; j < matShape.second; j++)
	{
		for (size_t i = j + 1; i < matShape.first; i++)
		{
			ssize_t currPivotPos = firstNonZeroPos(mat[i]),
					prevPivotPos = firstNonZeroPos(mat[j]);
			if (currPivotPos == prevPivotPos)
				mat[i] = mat[i] * mat[j][prevPivotPos] - mat[j] * mat[i][currPivotPos];
		}
	}
	mat.sortTheRowsByTheFirstNonZeroElement();
}

template <typename R>
void Matrix<R>::resetToZeroTheValuesAboveEachPivot(void)
{
	Matrix<R> &mat = *this;
	mat.sortTheRowsByTheFirstNonZeroElement();
	const shape_t matShape = matrix::utils::shape(mat);
	for (size_t i = 0; i < matShape.first; i++)
	{
		for (size_t j = i + 1; j < matShape.first; j++)
		{
			ssize_t pivotPos = firstNonZeroPos(mat[j]);
			if (pivotPos == -1)
				continue;
			mat[i] = mat[i] * mat[j][pivotPos] - mat[j] * mat[i][pivotPos];
		}
	}
	mat.sortTheRowsByTheFirstNonZeroElement();
}

template <typename R>
void Matrix<R>::normalizeThePivotValues(void)
{
	Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	for (size_t i = 0; i < matShape.first; i++)
	{
		ssize_t pivotPos = firstNonZeroPos(mat[i]);
		if (pivotPos == -1)
			continue;
		mat[i] *= 1 / mat[i][pivotPos];
	}
}

template <typename R>
Matrix<R> Matrix<R>::row_echelon(void) const
{
	Matrix<R> result = *this;
	result.sortTheRowsByTheFirstNonZeroElement();
	result.resetToZeroTheValuesBelowEachPivot();
	result.resetToZeroTheValuesAboveEachPivot();
	result.normalizeThePivotValues();
	return result;
}

template <typename R>
Matrix<R> Matrix<R>::minorMatrix(const size_t &i,
								 const size_t &j) const
{
	const Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	Matrix<R> extracted(matShape.first - 1);
	size_t extractedRow = 0;
	for (size_t k = 0; k < matShape.first; k++)
	{
		if (k == i)
			continue;
		extracted[extractedRow] = Vector<R>(matShape.first - 1);
		size_t extractedColumn = 0;
		for (size_t l = 0; l < matShape.first; l++)
		{
			if (l == j)
				continue;
			extracted[extractedRow][extractedColumn++] = mat[k][l];
		}
		extractedRow++;
	}
	return extracted;
}

template <typename R>
R Matrix<R>::determinant(void) const
{
	const Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	if (matShape.first != matShape.second)
		throw std::invalid_argument("The matrix must be square");
	if (matShape.first == 1 && matShape.second == 1)
		return mat[0][0];
	if (matShape.first == 2 && matShape.second == 2)
		return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
	R result = 0;
	for (size_t i = 0; i < matShape.second; i++)
	{
		Matrix extract = mat.minorMatrix(0, i);
		result += mat[0][i] * (i % 2 == 0 ? extract.determinant() : -extract.determinant());
	}
	return result;
}

template <typename R>
Matrix<R> Matrix<R>::inverse(void) const
{
	const Matrix<R> &mat = *this;
	const shape_t matShape = matrix::utils::shape(mat);
	if (matShape.first != matShape.second)
		throw std::invalid_argument("The matrix must be square");
	Matrix<R> result(matShape.first);
	for (size_t i = 0; i < matShape.first; i++)
	{
		result[i] = Vector<R>(matShape.second);
		for (size_t j = 0; j < matShape.second; j++)
		{
			Matrix<R> extract = mat.minorMatrix(i, j);
			result[i][j] = (i == j || i == matShape.second - j - 1 ? extract.determinant() : -extract.determinant());
		}
	}
	result = result.transpose();
	result *= 1 / mat.determinant();
	return result;
}
