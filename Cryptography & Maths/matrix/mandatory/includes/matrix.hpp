/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:48:44 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 19:02:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

using shape_t = std::pair<size_t,
						  size_t>;

namespace matrix
{
	namespace utils
	{
		template <typename R>
		const shape_t shape(const Matrix<R> &);

		template <typename R>
		bool is_square(const Matrix<R> &);

		template <typename R>
		Vector<R> reshape(const Matrix<R> &);
	}
}

template <typename A,
		  typename B>
std::ostream &operator<<(std::ostream &,
						 const std::pair<A,
										 B> &);

template <typename R>
std::ostream &operator<<(std::ostream &,
						 const Matrix<R> &);

template <typename R>
Matrix<R> operator+(const Matrix<R> &,
					const Matrix<R> &);

template <typename R>
Matrix<R> operator-(const Matrix<R> &,
					const Matrix<R> &);

template <typename R>
Matrix<R> operator*(const Matrix<R> &,
					const R &);

template <typename R>
Matrix<R> operator*(const R &,
					const Matrix<R> &);
