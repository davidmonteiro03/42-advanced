/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:40 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/23 16:42:59 by dcaetano         ###   ########.fr       */
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
	for (size_t i = 0; i < matShape.second; i++)
	{
		mat[i] = Vector<K>(matShape.first);
		for (size_t j = 0; j < matShape.first; j++)
			mat[i][j] = initList.begin()[j].begin()[i];
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
	try
	{
		const shape_t matShape = mat.shape();
		return matShape.first == matShape.second;
	}
	catch (const std::exception &e)
	{
		return false;
	}
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
