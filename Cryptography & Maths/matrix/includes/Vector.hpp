/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:50:24 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 15:56:54 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <initializer_list>

template <typename T>
class Vector
{
public:
	Vector(void);
	Vector(const size_t &);
	Vector(const std::initializer_list<T> &);
	Vector(const Vector &);
	Vector &operator=(const Vector &);
	~Vector();
	size_t size(void) const;
	T &operator[](const size_t &);
	const T &operator[](const size_t &) const;
	Vector &operator+=(const Vector &);
	Vector &operator-=(const Vector &);
	Vector &operator*=(const T &);

private:
	size_t _size;
	T *_data;
};

template <typename T>
std::ostream &operator<<(std::ostream &, const Vector<T> &);

#include "../tmps/Vector.tpp"

#endif // !VECTOR_HPP
