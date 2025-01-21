/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:26:23 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 18:45:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template <typename R>
Vector<R> linear_combination(const std::vector<Vector<R>> &,
							 const std::vector<R> &);

template <typename V,
		  typename R>
V lerp(const V &,
	   const V &,
	   const R &);

template <typename R>
R angle_cos(const Vector<R> &,
			const Vector<R> &);

template <typename R>
Vector<R> cross_product(const Vector<R> &,
						const Vector<R> &);
