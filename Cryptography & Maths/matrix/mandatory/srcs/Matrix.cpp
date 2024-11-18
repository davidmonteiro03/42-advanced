/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/18 16:04:59 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Matrix.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add matrix
Matrix &Matrix::operator+=(const Matrix &other)
{
	for (size_t i = 0; i < this->size(); i++)
		for (size_t j = 0; j < (*this)[i].size(); j++)
			(*this)[i][j] += other[i][j];
	return *this;
}
// subtract matrix
Matrix &Matrix::operator-=(const Matrix &other)
{
	for (size_t i = 0; i < this->size(); i++)
		for (size_t j = 0; j < (*this)[i].size(); j++)
			(*this)[i][j] -= other[i][j];
	return *this;
}
// scale matrix by a scalar
Matrix &Matrix::operator*=(const float &scalar)
{
	for (size_t i = 0; i < this->size(); i++)
		for (size_t j = 0; j < (*this)[i].size(); j++)
			(*this)[i][j] *= scalar;
	return *this;
}
