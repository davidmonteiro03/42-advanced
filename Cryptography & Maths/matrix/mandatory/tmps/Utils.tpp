/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:06 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/07 09:45:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

// vector size
template <typename R>
size_t Utils::vector_size(const Vector<R> &vector) { return vector.size(); }
// matrix shape
template <typename R>
const m_shape Utils::matrix_shape(const Matrix<R> &matrix)
{
	size_t m = matrix.size();
	if (m == 0)
		return std::make_pair(0, 0);
	size_t n = matrix[0].size();
	for (size_t i = 1; i < m; i++)
		if (matrix[i].size() != n)
			throw std::invalid_argument("Matrix must have all the rows with the same size.");
	return std::make_pair(m, n);
}
// checR if a matrix is square
template <typename R>
bool Utils::matrix_is_square(const Matrix<R> &matrix)
{
	const m_shape matrixShape = matrix_shape(matrix);
	return matrixShape.first == matrixShape.second;
}
// reshape a vector into a matrix
template <typename R>
Matrix<R> Utils::reshape_vector_into_matrix(const Vector<R> &vector, const size_t &rows, const size_t &cols)
{
	Matrix<R> matrix;
	for (size_t i = 0; i < rows; i++)
	{
		Vector<R> tmp;
		for (size_t j = 0; j < cols; j++)
			tmp.push_back(vector[i * cols + j]);
		matrix.push_back(tmp);
	}
	return matrix;
}
// reshape a matrix into a vector
template <typename R>
Vector<R> Utils::reshape_matrix_into_vector(const Matrix<R> &matrix)
{
	Vector<R> vector;
	for (size_t i = 0; i < matrix.size(); i++)
		for (size_t j = 0; j < matrix[i].size(); j++)
			vector.push_back(matrix[i][j]);
	return vector;
}
// print vector
template <typename R>
std::ostream &operator<<(std::ostream &os, const Vector<R> &vector)
{
	os << '[';
	for (size_t i = 0; i < vector.size(); i++)
	{
		if (i > 0)
			os << ", ";
		os << vector[i];
	}
	os << ']';
	return os;
}
// print matrix
template <typename R>
std::ostream &operator<<(std::ostream &os, const Matrix<R> &matrix)
{
	os << '[';
	for (size_t i = 0; i < matrix.size(); i++)
	{
		if (i > 0)
			os << ", " << std::endl
			   << ' ';
		os << matrix[i];
	}
	os << ']';
	return os;
}

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add two vectors
template <typename R>
Vector<R> operator+(const Vector<R> &u, const Vector<R> &v)
{
	size_t uSize = u.size(), vSize = v.size();
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size.");
	Vector<R> result(uSize);
	for (size_t i = 0; i < uSize; i++)
		result[i] = u[i] + v[i];
	return result;
}
// subtract two vectors
template <typename R>
Vector<R> operator-(const Vector<R> &u, const Vector<R> &v)
{
	size_t uSize = u.size(), vSize = v.size();
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size.");
	Vector<R> result(uSize);
	for (size_t i = 0; i < uSize; i++)
		result[i] = u[i] - v[i];
	return result;
}
// scale a vector by a scalar (scalar * vector)
template <typename R>
Vector<R> operator*(const Vector<R> &u, const R &a)
{
	size_t uSize = u.size();
	Vector<R> result(uSize);
	for (size_t i = 0; i < uSize; i++)
	{
		if (u[i] != static_cast<R>(0) && a != static_cast<R>(0))
			result[i] = u[i] * a;
		else
			result[i] = static_cast<R>(0);
	}
	return result;
}
// scale a vector by a scalar (vector * scalar)
template <typename R>
Vector<R> operator*(const R &a, const Vector<R> &u)
{
	size_t uSize = u.size();
	Vector<R> result(uSize);
	for (size_t i = 0; i < uSize; i++)
	{
		if (u[i] != static_cast<R>(0) && a != static_cast<R>(0))
			result[i] = u[i] * a;
		else
			result[i] = static_cast<R>(0);
	}
	return result;
}
// add two matrices
template <typename R>
Matrix<R> operator+(const Matrix<R> &u, const Matrix<R> &v)
{
	Matrix<R> result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] + v[i]);
	return result;
}
// subtract two matrices
template <typename R>
Matrix<R> operator-(const Matrix<R> &u, const Matrix<R> &v)
{
	Matrix<R> result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] - v[i]);
	return result;
}
// scale a matrix by a scalar (matrix * scalar)
template <typename R>
Matrix<R> operator*(const Matrix<R> &u, const R &a)
{
	Matrix<R> result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] * a);
	return result;
}
// scale a matrix by a scalar (scalar * matrix)
template <typename R>
Matrix<R> operator*(const R &a, const Matrix<R> &u)
{
	Matrix<R> result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] * a);
	return result;
}

/* ************************************************************************** */
/*                                    EX01                                    */
/* ************************************************************************** */

// linear combination
template <typename R>
Vector<R> linear_combination(const std::vector<Vector<R>> &u, const std::vector<R> &coefs)
{
	Vector<R> result(u[0].size());
	for (size_t i = 0; i < u.size(); i++)
		result += u[i] * coefs[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX02                                    */
/* ************************************************************************** */

// linear interpolation
template <typename R, typename V>
V lerp(const V &u, const V &v, const R &t)
{
	return (static_cast<R>(1) - t) * u + t * v;
}

/* ************************************************************************** */
/*                                    EX05                                    */
/* ************************************************************************** */

// cosine of the angle between two vectors
template <typename R>
R angle_cos(const Vector<R> &u, const Vector<R> &v)
{
	return u.dot(v) / (u.norm() * v.norm());
}

/* ************************************************************************** */
/*                                    EX06                                    */
/* ************************************************************************** */

// cross product
template <typename R>
Vector<R> cross_product(const Vector<R> &u, const Vector<R> &v)
{
	return Vector<R>({u[1] * v[2] - u[2] * v[1],
					  u[2] * v[0] - u[0] * v[2],
					  u[0] * v[1] - u[1] * v[0]});
}
