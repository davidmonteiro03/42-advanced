/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:59:57 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 17:09:00 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_TPP
#define UTILS_TPP

#include "../includes/Utils.hpp"

template <typename T>
bool Utils::matrix_is_square(const Matrix<T> &matrix) { return matrix.shape().first == matrix.shape().second; }

template <typename T>
Matrix<T> Utils::reshape_vector_into_matrix(const Vector<T> &vector,
											const size_t &n,
											const size_t &m)
{
	if (n * m != vector.size())
		throw std::invalid_argument("The product of n by m must be the same value as the vector size.");
	Matrix<T> matrix(n, m);
	size_t tmp = 0;
	for (size_t i = 0; i < matrix.shape().first; i++)
		for (size_t j = 0; j < matrix.shape().second; j++)
			matrix[i][j] = vector[tmp++];
	return matrix;
}

template <typename T>
Vector<T> Utils::reshape_matrix_into_vector(const Matrix<T> &matrix)
{
	Vector<T> vector(matrix.shape().first * matrix.shape().second);
	size_t tmp = 0;
	for (size_t i = 0; i < matrix.shape().first; i++)
		for (size_t j = 0; j < matrix.shape().second; j++)
			vector[tmp++] = matrix[i][j];
	return vector;
}

template <typename T>
Vector<T> operator+(const Vector<T> &a, const Vector<T> &b)
{
	Vector<T> result(a.size());
	for (size_t i = 0; i < a.size(); i++)
		result[i] = a[i] + b[i];
	return result;
}

template <typename T>
Vector<T> operator-(const Vector<T> &a, const Vector<T> &b)
{
	Vector<T> result(a.size());
	for (size_t i = 0; i < a.size(); i++)
		result[i] = a[i] - b[i];
	return result;
}

template <typename T>
Vector<T> operator*(const Vector<T> &vector, const T &scalar)
{
	Vector<T> result(vector.size());
	for (size_t i = 0; i < vector.size(); i++)
		result[i] = vector[i] * scalar;
	return result;
}

template <typename T>
Vector<T> operator*(const T &scalar, const Vector<T> &vector)
{
	Vector<T> result(vector.size());
	for (size_t i = 0; i < vector.size(); i++)
		result[i] = scalar * vector[i];
	return result;
}

template <typename T>
Matrix<T> operator+(const Matrix<T> &a, const Matrix<T> &b)
{
	Matrix<T> result(a.shape().first, a.shape().second);
	for (size_t i = 0; i < a.shape().first; i++)
		for (size_t j = 0; j < a.shape().second; j++)
			result[i][j] = a[i][j] + b[i][j];
	return result;
}

template <typename T>
Matrix<T> operator-(const Matrix<T> &a, const Matrix<T> &b)
{
	Matrix<T> result(a.shape().first, a.shape().second);
	for (size_t i = 0; i < a.shape().first; i++)
		for (size_t j = 0; j < a.shape().second; j++)
			result[i][j] = a[i][j] - b[i][j];
	return result;
}

template <typename T>
Matrix<T> operator*(const Matrix<T> &matrix, const T &scalar)
{
	Matrix<T> result(matrix.shape().first, matrix.shape().second);
	for (size_t i = 0; i < matrix.shape().first; i++)
		for (size_t j = 0; j < matrix.shape().second; j++)
			result[i][j] = matrix[i][j] * scalar;
	return result;
}

template <typename T>
Matrix<T> operator*(const T &scalar, const Matrix<T> &matrix)
{
	Matrix<T> result(matrix.shape().first, matrix.shape().second);
	for (size_t i = 0; i < matrix.shape().first; i++)
		for (size_t j = 0; j < matrix.shape().second; j++)
			result[i][j] = matrix[i][j] * scalar;
	return result;
}

#endif // !UTILS_TPP
