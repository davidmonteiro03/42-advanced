/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:41:57 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 13:58:07 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

typedef std::pair<size_t, size_t> m_shape;

class Utils
{
public:
	template <typename T>
	static size_t vector_size(const Vector<T> &); // vector size
	template <typename T>
	static const m_shape matrix_shape(const Matrix<T> &); // matrix shape
	template <typename T>
	static bool matrix_is_square(const Matrix<T> &); // check if a matrix is square
	template <typename T>
	static Matrix<T> reshape_vector_into_matrix(const Vector<T> &, const size_t &, const size_t &); // reshape a vector into a matrix
	template <typename T>
	static Vector<T> reshape_matrix_into_vector(const Matrix<T> &); // reshape a matrix into a vector

private:
	Utils(void);
	~Utils();
};

template <typename T>
std::ostream &operator<<(std::ostream &, const Vector<T> &); // print vector
template <typename T>
std::ostream &operator<<(std::ostream &, const Matrix<T> &); // print matrix

// ex00
template <typename T>
Vector<T> operator+(const Vector<T> &, const Vector<T> &); // add two vectors
template <typename T>
Vector<T> operator-(const Vector<T> &, const Vector<T> &); // subtract two vectors
template <typename T>
Vector<T> operator*(const Vector<T> &, const T &); // scale a vector by a scalar (scalar * vector)
template <typename T>
Vector<T> operator*(const T &, const Vector<T> &); // scale a vector by a scalar (vector * scalar)
template <typename T>
Matrix<T> operator+(const Matrix<T> &, const Matrix<T> &); // add two matrices
template <typename T>
Matrix<T> operator-(const Matrix<T> &, const Matrix<T> &); // subtract two matrices
template <typename T>
Matrix<T> operator*(const Matrix<T> &, const T &); // scale a matrix by a scalar (matrix * scalar)
template <typename T>
Matrix<T> operator*(const T &, const Matrix<T> &); // scale a matrix by a scalar (scalar * matrix)

// ex01
template <typename T>
Vector<T> linear_combination(const std::vector<Vector<T>> &, const std::vector<T> &); // linear combination

// ex02
template <typename T>
Vector<T> lerp(const Vector<T> &, const Vector<T> &, const T &); // linear interpolation (vector)
template <typename T>
Matrix<T> lerp(const Matrix<T> &, const Matrix<T> &, const T &); // linear interpolation (matrix)

// ex05
template <typename T>
T angle_cos(const Vector<T> &, const Vector<T> &); // cosine of the angle between two vectors

// ex06
template <typename T>
Vector<T> cross_product(const Vector<T> &, const Vector<T> &); // cross product

#endif // !UTILS_HPP
