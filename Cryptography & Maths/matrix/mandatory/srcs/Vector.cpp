/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/29 11:57:26 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add vector
Vector &Vector::operator+=(const Vector &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) += other[i];
	return *this;
}
// subtract vector
Vector &Vector::operator-=(const Vector &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) -= other[i];
	return *this;
}
// scale vector by a scalar
Vector &Vector::operator*=(const float &scalar)
{
	for (size_t i = 0; i < this->size(); i++)
		if (this->at(i) != 0)
			this->at(i) *= scalar;
	return *this;
}

/* ************************************************************************** */
/*                                    EX03                                    */
/* ************************************************************************** */

// dot product
float Vector::dot(const Vector &other) const
{
	Vector tmp(*this);
	float result = 0;
	for (size_t i = 0; i < tmp.size(); i++)
		result += tmp[i] * other[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX04                                    */
/* ************************************************************************** */

// manhattan norm
float Vector::norm_1(void) const
{
	float result = 0;
	for (size_t i = 0; i < this->size(); i++)
	{
		float num = (*this)[i];
		result += num < 0 ? -num : num;
	}
	return result;
}
// euclidean norm
float Vector::norm(void) const
{
	float result = 0;
	for (size_t i = 0; i < this->size(); i++)
		result += std::pow((*this)[i], 2);
	return std::pow(result, 0.5);
}
// supremum norm
float Vector::norm_inf(void) const
{
	float result = (*this)[0];
	for (size_t i = 1; i < this->size(); i++)
	{
		float num = (*this)[i];
		float tmp = num < 0 ? -num : num;
		result = std::max(result, tmp);
	}
	return result;
}
