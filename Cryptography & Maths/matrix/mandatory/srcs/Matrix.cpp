/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Matrix.hpp"
#include "../includes/Utils.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add matrix
Matrix &Matrix::operator+=(const Matrix &other)
{
	for (size_t i = 0; i < this->size(); i++)
		for (size_t j = 0; j < this->at(i).size(); j++)
			this->at(i).at(j) += other[i][j];
	return *this;
}
// subtract matrix
Matrix &Matrix::operator-=(const Matrix &other)
{
	for (size_t i = 0; i < this->size(); i++)
		for (size_t j = 0; j < this->at(i).size(); j++)
			this->at(i).at(j) -= other[i][j];
	return *this;
}
// scale matrix by a scalar
Matrix &Matrix::operator*=(const float &scalar)
{
	for (size_t i = 0; i < this->size(); i++)
		for (size_t j = 0; j < this->at(i).size(); j++)
			this->at(i).at(j) *= scalar;
	return *this;
}

/* ************************************************************************** */
/*                                    EX07                                    */
/* ************************************************************************** */

// multiply matrix by a vector
Vector Matrix::mul_vec(const Vector &vector)
{
	Vector result;
	for (size_t i = 0; i < this->size(); i++)
	{
		float tmp = 0;
		for (size_t j = 0; j < this->at(i).size(); j++)
			tmp += this->at(i).at(j) * vector[j];
		result.push_back(tmp);
	}
	return result;
}

// multiply matrix by a matrix
Matrix Matrix::mul_mat(const Matrix &matrix)
{
	Matrix result;
	for (size_t i = 0; i < this->size(); i++)
	{
		result.push_back(std::vector<float>());
		for (size_t j = 0; j < this->at(i).size(); j++)
		
	}
	return result;
}
