/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:06:17 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/22 11:37:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename R>
class Vector : public std::vector<R>
{
private:
	using std::vector<R>::vector;

public:
	Vector<R> &operator+=(const Vector<R> &);
	Vector<R> &operator-=(const Vector<R> &);
	Vector<R> &operator*=(const R &);

	R dot(const Vector<R> &) const;
	R norm_1(void) const;
	R norm(void) const;
	R norm_inf(void) const;

	ssize_t firstNonZeroPos(void) const;
};

template <typename R>
Vector(std::initializer_list<R>) -> Vector<R>;
