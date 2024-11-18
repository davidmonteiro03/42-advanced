/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:38:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/18 16:02:57 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <cstddef>

class Matrix : public std::vector<std::vector<float>>
{
public:
	using std::vector<std::vector<float>>::vector;
	// ex00
	Matrix &operator+=(const Matrix &); // add matrix
	Matrix &operator-=(const Matrix &); // subtract matrix
	Matrix &operator*=(const float &);	// scale matrix by a scalar
};

#endif // !MATRIX_HPP
