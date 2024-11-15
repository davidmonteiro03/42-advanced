/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:21:15 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 11:00:51 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <cstddef>
#include <tuple>
#include <iostream>

template <typename T>
class Matrix
{
public:
	Matrix(void);
	Matrix(const size_t &, const size_t &);
	Matrix(const Matrix &);
	Matrix &operator=(const Matrix &);
	~Matrix();
	const std::pair<size_t, size_t> shape(void) const;
	T *operator[](const size_t &);
	const T *operator[](const size_t &) const;

private:
	size_t _n, _m;
	T **_data;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Matrix<T> &matrix);

#include "../tmps/Matrix.tpp"

#endif // !MATRIX_HPP
