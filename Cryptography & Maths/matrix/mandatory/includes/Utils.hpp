/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:41:57 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/28 14:10:21 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "Vector.hpp"
#include "Matrix.hpp"
#include <iostream>
#include <cstddef>
#include <iomanip>

typedef std::pair<size_t, size_t> m_shape;

class Utils
{
public:
	static size_t vector_size(const Vector &);												  // vector size
	static const m_shape matrix_shape(const Matrix &);										  // matrix shape
	static bool matrix_is_square(const Matrix &);											  // check if a matrix is square
	static Matrix reshape_vector_into_matrix(const Vector &, const size_t &, const size_t &); // reshape a vector into a matrix
	static Vector reshape_matrix_into_vector(const Matrix &);								  // reshape a matrix into a vector

private:
	Utils(void);
	~Utils();
};

std::ostream &operator<<(std::ostream &, const Vector &); // print vector
std::ostream &operator<<(std::ostream &, const Matrix &); // print matrix

// ex00
Vector operator+(const Vector &, const Vector &); // add two vectors
Vector operator-(const Vector &, const Vector &); // subtract two vectors
Vector operator*(const Vector &, const float &);  // scale a vector by a scalar (scalar * vector)
Vector operator*(const float &, const Vector &);  // scale a vector by a scalar (vector * scalar)
Matrix operator+(const Matrix &, const Matrix &); // add two matrices
Matrix operator-(const Matrix &, const Matrix &); // subtract two matrices
Matrix operator*(const Matrix &, const float &);  // scale a matrix by a scalar (matrix * scalar)
Matrix operator*(const float &, const Matrix &);  // scale a matrix by a scalar (scalar * matrix)

// ex01
Vector linear_combination(const std::vector<Vector> &, const std::vector<float> &); // linear combination

// ex02
Vector lerp(const Vector &, const Vector &, const float &); // linear interpolation (vector)
Matrix lerp(const Matrix &, const Matrix &, const float &); // linear interpolation (matrix)

// ex05
float angle_cos(const Vector &, const Vector &); // cosine of the angle between two vectors

// ex06
Vector cross_product(const Vector &, const Vector &); // cross product

#endif // !UTILS_HPP
