/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:08 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 09:15:59 by dcaetano         ###   ########.fr       */
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
};

template <typename K>
Vector(std::initializer_list<K>) -> Vector<K>;

template <typename K>
Vector<K> linear_combination(const std::vector<Vector<K>> &, const std::vector<K> &);

template <typename K>
std::ostream &operator<<(std::ostream &, const Vector<K> &);
