/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.tpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:26:23 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 18:45:48 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template <typename R>
Vector<R> linear_combination(const std::vector<Vector<R>> &u,
							 const std::vector<R> &coefs)
{
	const size_t uSize = u.size(),
				 coefsSize = coefs.size();
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

template <typename V,
		  typename R>
V lerp(const V &u,
	   const V &v,
	   const R &t) { return u + (v - u) * t; }

template <typename R>
R angle_cos(const Vector<R> &u,
			const Vector<R> &v) { return u.dot(v) / (u.norm() * v.norm()); }

template <typename R>
Vector<R> cross_product(const Vector<R> &u,
						const Vector<R> &v)
{
	const Vector<R> &a = u,
					&b = v;
	const size_t aSize = vector::utils::size(a),
				 bSize = vector::utils::size(b);
	if (aSize != 3 || bSize != 3)
		throw std::invalid_argument("The cross product is only defined for 3D vectors.");
	return Vector<R>{u[1] * v[2] - u[2] * v[1],
					 u[2] * v[0] - u[0] * v[2],
					 u[0] * v[1] - u[1] * v[0]};
}
