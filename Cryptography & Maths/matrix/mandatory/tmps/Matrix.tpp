/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:40 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 09:16:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/ft_matrix.hpp"

template <typename K>
shape_t initListShape(const std::initializer_list<std::initializer_list<K>> &initList)
{
	size_t m = initList.size();
	if (m == 0)
		return shape_t(0, 0);
	size_t n = initList.begin()[0].size();
	for (size_t i = 1; i < m; i++)
		if (initList.begin()[i].size() != n)
			throw std::invalid_argument("The matrix must be rectangular.");
	return shape_t(m, n);
}

template <typename K>
Matrix<K>::Matrix(const std::initializer_list<std::initializer_list<K>> initList)
{
	Matrix<K> &mat = *this;
	const shape_t matShape = initListShape(initList);
	mat = Matrix<K>(matShape.second);
	for (size_t j = 0; j < matShape.second; j++)
	{
		mat[j] = Vector<K>(matShape.first);
		for (size_t i = 0; i < matShape.first; i++)
			mat[j][i] = initList.begin()[i].begin()[j];
	}
}

template <typename K>
shape_t Matrix<K>::shape(void) const
{
	const Matrix<K> &mat = *this;
	size_t m = mat.size();
	if (m == 0)
		return shape_t(0, 0);
	size_t n = mat[0].size();
	for (size_t i = 1; i < m; i++)
		if (mat[i].size() != n)
			throw std::invalid_argument("The matrix must be rectangular.");
	return shape_t(m, n);
}

template <typename K>
bool Matrix<K>::isSquare(void) const
{
	const Matrix<K> &mat = *this;
	const shape_t matShape = mat.shape();
	return matShape.first == matShape.second;
}

template <typename K>
Vector<K> Matrix<K>::reshape(void) const
{
	const Matrix<K> &mat = *this;
	const shape_t matShape = mat.shape();
	const size_t vecSize = matShape.first * matShape.second;
	Vector<K> vec(vecSize);
	for (size_t i = 0; i < matShape.first; i++)
		for (size_t j = 0; j < matShape.second; j++)
			vec[i * matShape.second + j] = mat[i][j];
	return vec;
}

template <typename K>
Matrix<K> &Matrix<K>::operator+=(const Matrix<K> &v)
{
	Matrix<K> &u = *this;
	const shape_t uShape = u.shape();
	const shape_t vShape = v.shape();
	if (uShape != vShape)
		throw std::invalid_argument("Matrices must have the same shape.");
	for (size_t j = 0; j < uShape.second; j++)
		for (size_t i = 0; i < uShape.first; i++)
			u[i][j] += v[i][j];
	return *this;
}

template <typename K>
Matrix<K> &Matrix<K>::operator-=(const Matrix<K> &v)
{
	Matrix<K> &u = *this;
	const shape_t uShape = u.shape();
	const shape_t vShape = v.shape();
	if (uShape != vShape)
		throw std::invalid_argument("Matrices must have the same shape.");
	for (size_t j = 0; j < uShape.second; j++)
		for (size_t i = 0; i < uShape.first; i++)
			u[i][j] -= v[i][j];
	return *this;
}

template <typename K>
Matrix<K> &Matrix<K>::operator*=(const K &a)
{
	Matrix<K> &u = *this;
	const shape_t uShape = u.shape();
	for (size_t j = 0; j < uShape.second; j++)
		for (size_t i = 0; i < uShape.first; i++)
			u[i][j] *= a;
	return *this;
}

template <typename K>
Matrix<K> Matrix<K>::operator+(const Matrix<K> &v) const
{
	Matrix<K> result(*this);
	return result += v;
}

template <typename K>
Matrix<K> Matrix<K>::operator-(const Matrix<K> &v) const
{
	Matrix<K> result(*this);
	return result -= v;
}

template <typename K>
Matrix<K> Matrix<K>::operator*(const K &a) const
{
	Matrix<K> result(*this);
	return result *= a;
}

template <typename K>
std::ostream &operator<<(std::ostream &os, const Matrix<K> &mat)
{
	const shape_t matShape = mat.shape();
	os << '[';
	for (size_t j = 0; j < matShape.second; j++)
	{
		if (j > 0)
			os << std::endl
			   << ' ';
		os << '[';
		for (size_t i = 0; i < matShape.first; i++)
		{
			if (i > 0)
				os << ' ';
			os << mat[i][j];
		}
		os << ']';
	}
	return os << ']';
}
