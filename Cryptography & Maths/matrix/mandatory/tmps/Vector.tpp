/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:06:00 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 18:49:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template <typename R>
Vector<R> &Vector<R>::operator+=(const Vector<R> &v)
{
	Vector<R> &u = *this;
	const size_t uSize = vector::utils::size(u),
				 vSize = vector::utils::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	for (size_t i = 0; i < uSize; i++)
		u[i] += v[i];
	return *this;
}

template <typename R>
Vector<R> &Vector<R>::operator-=(const Vector<R> &v)
{
	Vector<R> &u = *this;
	const size_t uSize = vector::utils::size(u),
				 vSize = vector::utils::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	for (size_t i = 0; i < uSize; i++)
		u[i] -= v[i];
	return *this;
}

template <typename R>
Vector<R> &Vector<R>::operator*=(const R &a)
{
	Vector<R> &u = *this;
	const size_t uSize = vector::utils::size(u);
	for (size_t i = 0; i < uSize; i++)
		if (u[i] != static_cast<R>(0) && a != static_cast<R>(0))
			u[i] *= a;
	return *this;
}

template <typename R>
R Vector<R>::dot(const Vector<R> &v) const
{
	Vector<R> u = *this;
	const size_t uSize = vector::utils::size(u),
				 vSize = vector::utils::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	R res = 0;
	for (size_t i = 0; i < uSize; i++)
		res += u[i] * v[i];
	return res;
}

template <typename R>
R Vector<R>::norm_1(void) const
{
	Vector<R> u = *this;
	const size_t uSize = vector::utils::size(u);
	R res = 0;
	for (size_t i = 0; i < uSize; i++)
		res += u[i] < 0 ? -u[i] : u[i];
	return res;
}

template <typename R>
R Vector<R>::norm(void) const
{
	Vector<R> u = *this;
	const size_t uSize = vector::utils::size(u);
	R res = 0;
	for (size_t i = 0; i < uSize; i++)
		res += u[i] * u[i];
	return pow(res, 0.5);
}

template <typename R>
R Vector<R>::norm_inf(void) const
{
	Vector<R> u = *this;
	const size_t uSize = vector::utils::size(u);
	R res = 0;
	for (size_t i = 0; i < uSize; i++)
		res = std::max(res, u[i] < 0 ? -u[i] : u[i]);
	return res;
}
