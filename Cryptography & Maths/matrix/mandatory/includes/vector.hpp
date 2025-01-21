// .../* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 08:38:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 08:48:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace vector
{
	namespace utils
	{
		template <typename R>
		size_t size(const Vector<R> &);

		template <typename R>
		Matrix<R> reshape(const Vector<R> &,
						  const size_t &,
						  const size_t &);
	}
}

template <typename R>
std::ostream &operator<<(std::ostream &,
						 const Vector<R> &);

template <typename R>
Vector<R> operator+(const Vector<R> &,
					const Vector<R> &);

template <typename R>
Vector<R> operator-(const Vector<R> &,
					const Vector<R> &);

template <typename R>
Vector<R> operator*(const Vector<R> &,
					const R &);

template <typename R>
Vector<R> operator*(const R &,
					const Vector<R> &);
