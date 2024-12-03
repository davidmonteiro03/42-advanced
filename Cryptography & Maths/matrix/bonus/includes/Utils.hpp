/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:41:57 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 16:37:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

typedef std::pair<size_t, size_t> m_shape;

class Utils
{
public:
	template <typename C>
	static size_t vector_size(const Vector<std::complex<C>> &); // vector size
	template <typename C>
	static const m_shape matrix_shape(const Matrix<std::complex<C>> &); // matrix shape
	template <typename C>
	static bool matrix_is_square(const Matrix<std::complex<C>> &); // check if a matrix is square
	template <typename C>
	static Matrix<std::complex<C>> reshape_vector_into_matrix(const Vector<std::complex<C>> &, const size_t &, const size_t &); // reshape a vector into a matrix
	template <typename C>
	static Vector<std::complex<C>> reshape_matrix_into_vector(const Matrix<std::complex<C>> &); // reshape a matrix into a vector

private:
	Utils(void);
	~Utils();
};

template <typename C>
std::ostream &operator<<(std::ostream &, const Vector<std::complex<C>> &); // print vector
template <typename C>
std::ostream &operator<<(std::ostream &, const Matrix<std::complex<C>> &); // print matrix

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
template <typename R>
Vector<R> lerp(const Vector<R> &, const Vector<R> &, const R &); // linear interpolation (vector)
template <typename R>
Matrix<R> lerp(const Matrix<R> &, const Matrix<R> &, const R &); // linear interpolation (matrix)

// ex05
template <typename R>
R angle_cos(const Vector<R> &, const Vector<R> &); // cosine of the angle between two vectors

// ex06
template <typename R>
Vector<R> cross_product(const Vector<R> &, const Vector<R> &); // cross product

#endif // !UTILS_HPP
