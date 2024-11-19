/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:38:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/19 16:44:16 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <cstddef>
#include "Vector.hpp"

class Matrix : public std::vector<std::vector<float>>
{
public:
	using std::vector<std::vector<float>>::vector;
	// ex00
	Matrix &operator+=(const Matrix &); // add matrix
	Matrix &operator-=(const Matrix &); // subtract matrix
	Matrix &operator*=(const float &);	// scale matrix by a scalar
	// ex07
	Vector mul_vec(const Vector &); // multiply matrix by a vector
	Matrix mul_mat(const Matrix &); // multiply matrix by a matrix
};

#endif // !MATRIX_HPP
