/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:06 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/19 17:03:00 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

size_t Utils::vector_size(const Vector &vector) { return vector.size(); }

const std::pair<size_t, size_t> Utils::matrix_shape(const Matrix &matrix)
{
	return std::make_pair(matrix.size(), matrix.size() == 0 ? 0 : matrix[0].size());
}

bool Utils::matrix_is_square(const Matrix &matrix)
{
	const std::pair<size_t, size_t> matrixShape = matrix_shape(matrix);
	return matrixShape.first == matrixShape.second;
}

Matrix Utils::reshape_vector_into_matrix(const Vector &vector, const size_t &rows, const size_t &cols)
{
	Matrix matrix;
	for (size_t i = 0; i < rows; i++)
	{
		matrix.push_back(std::vector<float>());
		for (size_t j = 0; j < cols; j++)
			matrix[i].push_back(vector[i * cols + j]);
	}
	return matrix;
}

Vector Utils::reshape_matrix_into_vector(const Matrix &matrix)
{
	Vector vector;
	for (size_t i = 0; i < matrix.size(); i++)
		for (size_t j = 0; j < matrix[i].size(); j++)
			vector.push_back(matrix[i][j]);
	return vector;
}

std::ostream &operator<<(std::ostream &os, const Vector &vector)
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

std::ostream &operator<<(std::ostream &os, const Matrix &matrix)
{
	os << '[';
	for (size_t i = 0; i < matrix.size(); i++)
	{
		if (i > 0)
			os << std::endl
			   << ' ';
		os << '[';
		for (size_t j = 0; j < matrix[i].size(); j++)
		{
			if (j > 0)
				os << ", ";
			os << matrix[i][j];
		}
		os << ']';
	}
	os << ']';
	return os;
}

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add two vectors
Vector operator+(const Vector &u, const Vector &v)
{
	Vector result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] + v[i]);
	return result;
}
// subtract two vectors
Vector operator-(const Vector &u, const Vector &v)
{
	Vector result;
	for (size_t i = 0; i < u.size(); i++)
		result.push_back(u[i] - v[i]);
	return result;
}
// scale a vector by a scalar (scalar * vector)
Vector operator*(const Vector &vector, const float &scalar)
{
	Vector result;
	for (size_t i = 0; i < vector.size(); i++)
		result.push_back(vector[i] * scalar);
	return result;
}
// scale a vector by a scalar (vector * scalar)
Vector operator*(const float &scalar, const Vector &vector)
{
	Vector result;
	for (size_t i = 0; i < vector.size(); i++)
		result.push_back(vector[i] * scalar);
	return result;
}
// add two matrices
Matrix operator+(const Matrix &a, const Matrix &b)
{
	Matrix result;
	for (size_t i = 0; i < a.size(); i++)
	{
		result.push_back(std::vector<float>());
		for (size_t j = 0; j < a[i].size(); j++)
			result[i].push_back(a[i][j] + b[i][j]);
	}
	return result;
}
// subtract two matrices
Matrix operator-(const Matrix &a, const Matrix &b)
{
	Matrix result;
	for (size_t i = 0; i < a.size(); i++)
	{
		result.push_back(std::vector<float>());
		for (size_t j = 0; j < a[i].size(); j++)
			result[i].push_back(a[i][j] - b[i][j]);
	}
	return result;
}
// scale a matrix by a scalar (matrix * scalar)
Matrix operator*(const Matrix &matrix, const float &scalar)
{
	Matrix result;
	for (size_t i = 0; i < matrix.size(); i++)
	{
		result.push_back(std::vector<float>());
		for (size_t j = 0; j < matrix[i].size(); j++)
			result[i].push_back(matrix[i][j] * scalar);
	}
	return result;
}
// scale a matrix by a scalar (scalar * matrix)
Matrix operator*(const float &scalar, const Matrix &matrix)
{
	Matrix result;
	for (size_t i = 0; i < matrix.size(); i++)
	{
		result.push_back(std::vector<float>());
		for (size_t j = 0; j < matrix[i].size(); j++)
			result[i].push_back(matrix[i][j] * scalar);
	}
	return result;
}

/* ************************************************************************** */
/*                                    EX01                                    */
/* ************************************************************************** */

// linear combination
Vector linear_combination(const std::vector<Vector> &vectors, const std::vector<float> &scalars)
{
	Vector result(vectors[0].size());
	for (size_t i = 0; i < vectors.size(); i++)
		result += vectors[i] * scalars[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX02                                    */
/* ************************************************************************** */

// linear interpolation (vector)
Vector lerp(const Vector &u, const Vector &v, const float &t)
{
	return (1 - t) * u + t * v;
}
// linear interpolation (matrix)
Matrix lerp(const Matrix &u, const Matrix &v, const float &t)
{
	return (1 - t) * u + t * v;
}

/* ************************************************************************** */
/*                                    EX05                                    */
/* ************************************************************************** */

// cosine of the angle between two vectors
float angle_cos(const Vector &u, const Vector &v)
{
	return u.dot(v) / (u.norm() * v.norm());
}

/* ************************************************************************** */
/*                                    EX06                                    */
/* ************************************************************************** */

// cross product
Vector cross_product(const Vector &u, const Vector &v)
{
	return Vector({
		u[1] * v[2] - u[2] * v[1],
		u[2] * v[0] - u[0] * v[2],
		u[0] * v[1] - u[1] * v[0]
	});
}
