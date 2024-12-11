/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:06:17 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 15:02:59 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename R>
using valid_arithemic_field = std::enable_if_t<std::is_arithmetic<R>::value>;

template <typename R, typename Enable = void>
class Vector;

template <typename R>
class Vector<R, valid_arithemic_field<R>> : public std::vector<R>
{
private:
	using std::vector<R>::vector;
public:
	Vector<R> &operator+=(const Vector<R> &);
	Vector<R> &operator-=(const Vector<R> &);
	Vector<R> &operator*=(const R &);
	R dot(const Vector<R> &);
};

template <typename R>
Vector(std::initializer_list<R>) -> Vector<R>;
