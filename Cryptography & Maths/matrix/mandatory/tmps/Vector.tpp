/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:06:00 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 15:05:41 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template <typename R>
Vector<R> &Vector<R, valid_arithemic_field<R>>::operator+=(const Vector<R> &v)
{
	Vector<R> &u = *this;
	const size_t uSize = vector::size(u), vSize = vector::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	for (size_t i = 0; i < uSize; i++)
		u[i] += v[i];
	return *this;
}

template <typename R>
Vector<R> &Vector<R, valid_arithemic_field<R>>::operator-=(const Vector<R> &v)
{
	Vector<R> &u = *this;
	const size_t uSize = vector::size(u), vSize = vector::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	for (size_t i = 0; i < uSize; i++)
		u[i] -= v[i];
	return *this;
}

template <typename R>
Vector<R> &Vector<R, valid_arithemic_field<R>>::operator*=(const R &a)
{
	Vector<R> &u = *this;
	const size_t uSize = vector::size(u);
	for (size_t i = 0; i < uSize; i++)
		if (u[i] != static_cast<R>(0) && a != static_cast<R>(0))
			u[i] *= a;
	return *this;
}

template<typename R>
R Vector<R, valid_arithemic_field<R>>::dot(const Vector<R> &v)
{
	Vector<R> u = *this;
	const size_t uSize = vector::size(u), vSize = vector::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	R res = 0;
	for (size_t i = 0; i < uSize; i++)
		res += u[i] * v[i];
	return res;
}
