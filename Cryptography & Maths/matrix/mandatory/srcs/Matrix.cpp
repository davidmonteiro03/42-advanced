/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/20 16:56:28 by dcaetano         ###   ########.fr       */
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
		this->at(i) += other[i];
	return *this;
}
// subtract matrix
Matrix &Matrix::operator-=(const Matrix &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) -= other[i];
	return *this;
}
// scale matrix by a scalar
Matrix &Matrix::operator*=(const float &scalar)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) *= scalar;
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
		result.push_back(this->at(i).dot(vector));
	return result;
}
// multiply matrix by a matrix
Matrix Matrix::mul_mat(const Matrix &matrix)
{
	Matrix a = *this, b = matrix, c;
	m_shape aShape = Utils::matrix_shape(a), bShape = Utils::matrix_shape(b);
	size_t m = aShape.first, n = aShape.second, p = bShape.second;
	for (size_t i = 0; i < m; i++)
	{
		Vector u;
		for (size_t j = 0; j < p; j++)
		{
			float tmp = 0;
			for (size_t k = 0; k < n; k++)
				tmp += a[i][k] * b[k][j];
			u.push_back(tmp);
		}
		c.push_back(u);
	}
	return c;
}

/* ************************************************************************** */
/*                                    EX08                                    */
/* ************************************************************************** */

// trace
float Matrix::trace(void) const
{
	float result = 0;
	for (size_t i = 0; i < this->size(); i++)
		result += this->at(i)[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX09                                    */
/* ************************************************************************** */

// transpose
Matrix Matrix::transpose(void)
{
	m_shape localShape = Utils::matrix_shape(*this);
	Matrix result;
	for (size_t i = 0; i < localShape.second; i++)
	{
		Vector tmp;
		for (size_t j = 0; j < localShape.first; j++)
			tmp.push_back(this->at(j)[i]);
		result.push_back(tmp);
	}
	return result;
}
