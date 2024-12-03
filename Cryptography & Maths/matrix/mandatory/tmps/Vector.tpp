/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 16:27:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add vector
template <typename R>
Vector<R> &Vector<R>::operator+=(const Vector<R> &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) += other[i];
	return *this;
}
// subtract vector
template <typename R>
Vector<R> &Vector<R>::operator-=(const Vector<R> &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) -= other[i];
	return *this;
}
// scale vector by a scalar
template <typename R>
Vector<R> &Vector<R>::operator*=(const R &scalar)
{
	for (size_t i = 0; i < this->size(); i++)
		if (this->at(i) != static_cast<R>(0))
			this->at(i) *= scalar;
	return *this;
}

/* ************************************************************************** */
/*                                    EX03                                    */
/* ************************************************************************** */

// dot product
template <typename R>
R Vector<R>::dot(const Vector<R> &other) const
{
	Vector<R> tmp(*this);
	R result = static_cast<R>(0);
	for (size_t i = 0; i < tmp.size(); i++)
		result += tmp[i] * other[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX04                                    */
/* ************************************************************************** */

// manhattan norm
template <typename R>
R Vector<R>::norm_1(void) const
{
	R result = static_cast<R>(0);
	for (size_t i = 0; i < this->size(); i++)
	{
		R num = (*this)[i];
		result += num < static_cast<R>(0) ? -num : num;
	}
	return result;
}
// euclidean norm
template <typename R>
R Vector<R>::norm(void) const
{
	R result = static_cast<R>(0);
	for (size_t i = 0; i < this->size(); i++)
		result += std::pow((*this)[i], 2);
	return std::pow(result, 0.5);
}
// supremum norm
template <typename R>
R Vector<R>::norm_inf(void) const
{
	R result = (*this)[0];
	for (size_t i = 1; i < this->size(); i++)
	{
		R num = (*this)[i];
		R tmp = num < static_cast<R>(0) ? -num : num;
		result = std::max(result, tmp);
	}
	return result;
}
