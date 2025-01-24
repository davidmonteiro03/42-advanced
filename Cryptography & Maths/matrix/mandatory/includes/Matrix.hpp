/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:51:16 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 09:15:54 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

using shape_t = std::pair<size_t, size_t>;

template <typename K>
class Matrix : public std::vector<Vector<K>>
{
private:
	using std::vector<Vector<K>>::vector;

public:
	Matrix(const std::initializer_list<std::initializer_list<K>>);
	shape_t shape(void) const;
	bool isSquare(void) const;
	Vector<K> reshape(void) const;

	Matrix<K> &operator+=(const Matrix<K> &);
	Matrix<K> &operator-=(const Matrix<K> &);
	Matrix<K> &operator*=(const K &);

	Matrix<K> operator+(const Matrix<K> &) const;
	Matrix<K> operator-(const Matrix<K> &) const;
	Matrix<K> operator*(const K &) const;
};

template <typename K>
Matrix(std::initializer_list<std::initializer_list<K>>) -> Matrix<K>;

template <typename K>
std::ostream &operator<<(std::ostream &, const Matrix<K> &);
