/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:08 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 22:00:06 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename K>
class Vector : public std::vector<K>
{
private:
	using std::vector<K>::vector;

public:
	Matrix<K> reshape(const size_t &, const size_t &) const;

	Vector<K> &operator+=(const Vector<K> &);
	Vector<K> &operator-=(const Vector<K> &);
	Vector<K> &operator*=(const K &);

	Vector<K> operator+(const Vector<K> &) const;
	Vector<K> operator-(const Vector<K> &) const;
	Vector<K> operator*(const K &) const;

	K dot(const Vector<K> &) const;
	_Float32x norm_1(void) const;
	_Float32x norm(void) const;
	_Float32x norm_inf(void) const;
};

template <typename K>
Vector(std::initializer_list<K>) -> Vector<K>;

template <typename K>
std::ostream &operator<<(std::ostream &, const Vector<K> &);

template <typename K>
Vector<K> linear_combination(const std::vector<Vector<K>> &, const std::vector<K> &);
