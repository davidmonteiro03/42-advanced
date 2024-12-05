/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:54 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/05 17:51:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename R>
using valid_real_number = std::enable_if_t<std::is_floating_point<R>::value>;

template <typename R, typename Enable = void>
class Vector;

template <typename R>
class Vector<R, valid_real_number<R>> : public std::vector<R>
{
public:
	using std::vector<R>::vector;
	// ex00
	Vector<R> &operator+=(const Vector<R> &); // add vector
	Vector<R> &operator-=(const Vector<R> &); // subtract vector
	Vector<R> &operator*=(const R &);		  // scale vector by a scalar
	// ex03
	R dot(const Vector<R> &) const; // dot product
	// ex04
	R norm_1(void) const;	// manhattan norm
	R norm(void) const;		// euclidean norm
	R norm_inf(void) const; // supremum norm
};
