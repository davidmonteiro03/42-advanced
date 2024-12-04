/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:41:57 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/04 10:13:10 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

class Utils
{
public:
	template <typename R>
	static size_t vector_size(const Vector<R> &); // vector size
	template <typename R>
	static const m_shape matrix_shape(const Matrix<R> &); // matrix shape
	template <typename R>
	static bool matrix_is_square(const Matrix<R> &); // check if a matrix is square
	template <typename R>
	static Matrix<R> reshape_vector_into_matrix(const Vector<R> &, const size_t &, const size_t &); // reshape a vector into a matrix
	template <typename R>
	static Vector<R> reshape_matrix_into_vector(const Matrix<R> &); // reshape a matrix into a vector

private:
	Utils(void);
	~Utils();
};

template <typename R>
std::ostream &operator<<(std::ostream &, const Vector<R> &); // print vector
template <typename R>
std::ostream &operator<<(std::ostream &, const Matrix<R> &); // print matrix

// ex00
template <typename R>
Vector<R> operator+(const Vector<R> &, const Vector<R> &); // add two vectors
template <typename R>
Vector<R> operator-(const Vector<R> &, const Vector<R> &); // subtract two vectors
template <typename R>
Vector<R> operator*(const Vector<R> &, const R &); // scale a vector by a scalar (scalar * vector)
template <typename R>
Vector<R> operator*(const R &, const Vector<R> &); // scale a vector by a scalar (vector * scalar)
template <typename R>
Matrix<R> operator+(const Matrix<R> &, const Matrix<R> &); // add two matrices
template <typename R>
Matrix<R> operator-(const Matrix<R> &, const Matrix<R> &); // subtract two matrices
template <typename R>
Matrix<R> operator*(const Matrix<R> &, const R &); // scale a matrix by a scalar (matrix * scalar)
template <typename R>
Matrix<R> operator*(const R &, const Matrix<R> &); // scale a matrix by a scalar (scalar * matrix)

// ex01
template <typename R>
Vector<R> linear_combination(const std::vector<Vector<R>> &, const std::vector<R> &); // linear combination

// ex02
template <typename R, typename V>
V lerp(const V &u, const V &v, const R &t); // linear interpolation

// ex05
template <typename R>
R angle_cos(const Vector<R> &, const Vector<R> &); // cosine of the angle between two vectors

// ex06
template <typename R>
Vector<R> cross_product(const Vector<R> &, const Vector<R> &); // cross product

#endif // !UTILS_HPP
