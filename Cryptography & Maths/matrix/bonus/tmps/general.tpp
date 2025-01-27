/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.tpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:13:48 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 15:46:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/ft_matrix.hpp"

template <typename K>
Vector<K> operator*(const K &a, const Vector<K> &u) { return u * a; }

template <typename K>
Matrix<K> operator*(const K &a, const Matrix<K> &u) { return u * a; }

template <typename K>
K ft_abs(const std::complex<K> &z)
{
	const K realPart = z.real();
	const K imagPart = z.imag();
	const K realSquare = std::pow(realPart, 2);
	const K imagSquare = std::pow(imagPart, 2);
	if (realPart == 0 && imagPart == 0)
		return 0;
	if (realPart == 0)
		return std::pow(imagSquare, 0.5);
	if (imagPart == 0)
		return std::pow(realSquare, 0.5);
	return std::pow(realSquare + imagSquare, 0.5);
}

template <typename K>
K ft_abs(const K &a)
{
	if (a == 0)
		return 0;
	return a > 0 ? a : -a;
}

template <typename V, typename K>
V lerp(const V &u, const V &v, const K &t) { return (static_cast<K>(1) - t) * u + t * v; }
