/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:06 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 14:10:40 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

// vector size
template <typename T>
size_t Utils::vector_size(const Vector<T> &vector) { return vector.size(); }
// matrix shape
template <typename T>
const m_shape Utils::matrix_shape(const Matrix<T> &matrix)
{
	return std::make_pair(matrix.size(), matrix.size() == 0 ? 0 : matrix[0].size());
}
// check if a matrix is square
template <typename T>
bool Utils::matrix_is_square(const Matrix<T> &matrix)
{
	const m_shape matrixShape = matrix_shape(matrix);
	return matrixShape.first == matrixShape.second;
}
// reshape a vector into a matrix
template <typename T>
Matrix<T> Utils::reshape_vector_into_matrix(const Vector<T> &vector, const size_t &rows, const size_t &cols)
{
	Matrix<T> matrix;
	for (size_t i = 0; i < rows; i++)
	{
		Vector<T> tmp;
		for (size_t j = 0; j < cols; j++)
			tmp.push_back(vector[i * cols + j]);
		matrix.push_back(tmp);
	}
	return matrix;
}
// reshape a matrix into a vector
template <typename T>
Vector<T> Utils::reshape_matrix_into_vector(const Matrix<T> &matrix)
{
	Vector<T> vector;
	for (size_t i = 0; i < matrix.size(); i++)
		for (size_t j = 0; j < matrix[i].size(); j++)
			vector.push_back(matrix[i][j]);
	return vector;
}
// print vector
template <typename T>
std::ostream &operator<<(std::ostream &os, const Vector<T> &vector)
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
template <typename T>
std::ostream &operator<<(std::ostream &os, const Matrix<T> &matrix)
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
template <typename T>
Vector<T> operator+(const Vector<T> &u, const Vector<T> &v)
{
	Vector<T> result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] + v[i]);
	return result;
}
// subtract two vectors
template <typename T>
Vector<T> operator-(const Vector<T> &u, const Vector<T> &v)
{
	Vector<T> result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] - v[i]);
	return result;
}
// scale a vector by a scalar (scalar * vector)
template <typename T>
Vector<T> operator*(const Vector<T> &vector, const T &scalar)
{
	Vector<T> result;
	for (size_t i = 0; i < vector.size(); i++)
		result.push_back(vector[i] == 0 ? 0 : vector[i] * scalar);
	return result;
}
// scale a vector by a scalar (vector * scalar)
template <typename T>
Vector<T> operator*(const T &scalar, const Vector<T> &vector)
{
	Vector<T> result;
	for (size_t i = 0; i < vector.size(); i++)
		result.push_back(vector[i] == 0 ? 0 : vector[i] * scalar);
	return result;
}
// add two matrices
template <typename T>
Matrix<T> operator+(const Matrix<T> &a, const Matrix<T> &b)
{
	Matrix<T> result;
	for (size_t i = 0; i < a.size(); i++)
		result.push_back(a[i] + b[i]);
	return result;
}
// subtract two matrices
template <typename T>
Matrix<T> operator-(const Matrix<T> &a, const Matrix<T> &b)
{
	Matrix<T> result;
	for (size_t i = 0; i < a.size(); i++)
		result.push_back(a[i] - b[i]);
	return result;
}
// scale a matrix by a scalar (matrix * scalar)
template <typename T>
Matrix<T> operator*(const Matrix<T> &matrix, const T &scalar)
{
	Matrix<T> result;
	for (size_t i = 0; i < matrix.size(); i++)
		result.push_back(matrix[i] * scalar);
	return result;
}
// scale a matrix by a scalar (scalar * matrix)
template <typename T>
Matrix<T> operator*(const T &scalar, const Matrix<T> &matrix)
{
	Matrix<T> result;
	for (size_t i = 0; i < matrix.size(); i++)
		result.push_back(matrix[i] * scalar);
	return result;
}

/* ************************************************************************** */
/*                                    EX01                                    */
/* ************************************************************************** */

// linear combination
template <typename T>
Vector<T> linear_combination(const std::vector<Vector<T>> &vectors, const std::vector<T> &scalars)
{
	Vector<T> result(vectors[0].size());
	for (size_t i = 0; i < vectors.size(); i++)
		result += vectors[i] * scalars[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX02                                    */
/* ************************************************************************** */

// linear interpolation (vector)
template <typename T>
Vector<T> lerp(const Vector<T> &u, const Vector<T> &v, const T &t)
{
	return (1 - t) * u + t * v;
}
// linear interpolation (matrix)
template <typename T>
Matrix<T> lerp(const Matrix<T> &u, const Matrix<T> &v, const T &t)
{
	return (1 - t) * u + t * v;
}

/* ************************************************************************** */
/*                                    EX05                                    */
/* ************************************************************************** */

// cosine of the angle between two vectors
template <typename T>
T angle_cos(const Vector<T> &u, const Vector<T> &v)
{
	return u.dot(v) / (u.norm() * v.norm());
}

/* ************************************************************************** */
/*                                    EX06                                    */
/* ************************************************************************** */

// cross product
template <typename T>
Vector<T> cross_product(const Vector<T> &u, const Vector<T> &v)
{
	return Vector<T>({u[1] * v[2] - u[2] * v[1],
					  u[2] * v[0] - u[0] * v[2],
					  u[0] * v[1] - u[1] * v[0]});
}
