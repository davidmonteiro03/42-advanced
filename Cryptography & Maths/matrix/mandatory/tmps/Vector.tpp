/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:40 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/23 18:15:36 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/ft_matrix.hpp"

template <typename K>
Matrix<K> Vector<K>::reshape(const size_t &m, const size_t &n) const
{
	const Vector<K> &u = *this;
	const size_t uSize = u.size();
	if (m * n != uSize)
		throw std::invalid_argument("Invalid reshape dimensions.");
	Matrix<K> result(m);
	for (size_t i = 0; i < m; i++)
	{
		result[i] = Vector<K>(n);
		for (size_t j = 0; j < n; j++)
			result[i][j] = u[i * n + j];
	}
	return result;
}

template<typename K>
Vector<K> &Vector<K>::operator+=(const Vector<K> &v)
{
	Vector<K> &u = *this;
	const size_t uSize = u.size();
	const size_t vSize = v.size();
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size.");
	for (size_t i = 0; i < uSize; i++)
		u[i] += v[i];
	return *this;
}

template<typename K>
Vector<K> &Vector<K>::operator-=(const Vector<K> &v)
{
	Vector<K> &u = *this;
	const size_t uSize = u.size();
	const size_t vSize = v.size();
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size.");
	for (size_t i = 0; i < uSize; i++)
		u[i] -= v[i];
	return *this;
}

template<typename K>
Vector<K> &Vector<K>::operator*=(const K &a)
{
	Vector<K> &u = *this;
	const size_t uSize = u.size();
	for (size_t i = 0; i < uSize; i++)
		u[i] *= a;
	return *this;
}

template <typename K>
std::ostream &operator<<(std::ostream &os, const Vector<K> &vec)
{
	os << '[';
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (i > 0)
			os << ' ';
		os << vec[i];
	}
	return os << ']';
}
