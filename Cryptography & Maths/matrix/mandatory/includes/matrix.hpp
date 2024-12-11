/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:48:44 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 17:48:04 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./ft_matrix.hpp"

using shape_t = std::pair<size_t,
						  size_t>;

namespace matrix
{
	template <typename R>
	const shape_t shape(const Matrix<R> &);

	template <typename R>
	bool is_square(const Matrix<R> &);

	template <typename R>
	Vector<R> reshape(const Matrix<R> &);
}

template <typename A,
		  typename B>
std::ostream &operator<<(std::ostream &,
						 const std::pair<A, B> &);

template <typename R>
std::ostream &operator<<(std::ostream &,
						 const Matrix<R> &);

template <typename R>
Matrix<R> operator+(const Matrix<R> &u,
					const Matrix<R> &v);

template <typename R>
Matrix<R> operator-(const Matrix<R> &u,
					const Matrix<R> &v);

template <typename R>
Matrix<R> operator*(const Matrix<R> &u,
					const R &a);

template <typename R>
Matrix<R> operator*(const R &a,
					const Matrix<R> &v);
