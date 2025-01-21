/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:26:55 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 18:54:06 by dcaetano         ###   ########.fr       */
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
ssize_t firstNonZeroPos(const Vector<R> &line)
{
	for (size_t i = 0; i < line.size(); i++)
		if (line[i] != 0)
			return i;
	return -1;
}

template <typename R>
void sortTheRowsByTheFirstNonZeroElement(Matrix<R> &matrix)
{
	const shape_t shape = matrix::utils::shape(matrix);
	std::vector<ssize_t> pivots_poss;
	for (size_t i = 0; i < shape.first; i++)
		pivots_poss.push_back(firstNonZeroPos(matrix[i]));
	for (size_t i = 0; i < shape.first; i++)
	{
		for (size_t j = i + 1; j < shape.first; j++)
		{
			if (pivots_poss[i] > pivots_poss[j])
			{
				std::swap(pivots_poss[i], pivots_poss[j]);
				std::swap(matrix[i], matrix[j]);
			}
		}
	}
}

template <typename R>
void resetToZeroTheValuesBelowEachPivot(Matrix<R> &matrix)
{
	sortTheRowsByTheFirstNonZeroElement(matrix);
	const shape_t shape = matrix::utils::shape(matrix);
	for (size_t j = 0; j < shape.second; j++)
	{
		for (size_t i = j + 1; i < shape.first; i++)
		{
			ssize_t currPivotPos = firstNonZeroPos(matrix[i]),
					prevPivotPos = firstNonZeroPos(matrix[j]);
			if (currPivotPos == prevPivotPos)
				matrix[i] = matrix[i] * matrix[j][prevPivotPos] - matrix[j] * matrix[i][currPivotPos];
		}
	}
	sortTheRowsByTheFirstNonZeroElement(matrix);
}

template <typename R>
void resetToZeroTheValuesAboveEachPivot(Matrix<R> &matrix)
{
	sortTheRowsByTheFirstNonZeroElement(matrix);
	const shape_t shape = matrix::utils::shape(matrix);
	for (size_t i = 0; i < shape.first; i++)
	{
		for (size_t j = i + 1; j < shape.first; j++)
		{
			ssize_t pivotPos = firstNonZeroPos(matrix[j]);
			if (pivotPos == -1)
				continue;
			matrix[i] = matrix[i] * matrix[j][pivotPos] - matrix[j] * matrix[i][pivotPos];
		}
	}
	sortTheRowsByTheFirstNonZeroElement(matrix);
}

template <typename R>
void normalizeThePivotValues(Matrix<R> &matrix)
{
	const shape_t shape = matrix::utils::shape(matrix);
	for (size_t i = 0; i < shape.first; i++)
	{
		ssize_t pivotPos = firstNonZeroPos(matrix[i]);
		if (pivotPos == -1)
			continue;
		matrix[i] *= 1 / matrix[i][pivotPos];
	}
}

template <typename R>
Matrix<R> Matrix<R>::row_echelon(void) const
{
	Matrix<R> result = *this;
	sortTheRowsByTheFirstNonZeroElement(result);
	resetToZeroTheValuesBelowEachPivot(result);
	resetToZeroTheValuesAboveEachPivot(result);
	normalizeThePivotValues(result);
	return result;
}
