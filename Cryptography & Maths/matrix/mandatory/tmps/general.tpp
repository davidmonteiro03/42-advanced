/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.tpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:26:23 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 14:57:41 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template <typename R>
Vector<R> linear_combination(const std::vector<Vector<R>> &u, const std::vector<R> &coefs)
{
	const size_t uSize = u.size(), coefsSize = coefs.size();
	if (uSize != coefsSize)
		throw std::invalid_argument("The number of vectors and coefficients must be the same.");
	const size_t elemSize = u[0].size();
	for (size_t i = 0; i < uSize; i++)
		if (u[i].size() != elemSize)
			throw std::invalid_argument("All vectors must have the same size.");
	Vector<R> res(elemSize);
	for (size_t i = 0; i < uSize; i++)
		res += u[i] * coefs[i];
	return res;
}

template<typename V, typename R>
V lerp(const V &u, const V &v, const R &t)
{
	if (t < 0 || t > 1)
		throw std::invalid_argument("The interpolation factor must be between 0 and 1.");
	return u + (v - u) * t;
}
