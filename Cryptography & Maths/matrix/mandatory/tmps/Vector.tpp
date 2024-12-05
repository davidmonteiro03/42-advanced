/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/05 13:00:21 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add vector
template <typename R>
Vector<R> &Vector<R, valid_real_number<R>>::operator+=(const Vector<R> &v)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) += v[i];
	return *this;
}
// subtract vector
template <typename R>
Vector<R> &Vector<R, valid_real_number<R>>::operator-=(const Vector<R> &v)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) -= v[i];
	return *this;
}
// scale vector by a scalar
template <typename R>
Vector<R> &Vector<R, valid_real_number<R>>::operator*=(const R &a)
{
	for (size_t i = 0; i < this->size(); i++)
		if (this->at(i) != static_cast<R>(0) && a != static_cast<R>(0))
			this->at(i) *= a;
	return *this;
}

/* ************************************************************************** */
/*                                    EX03                                    */
/* ************************************************************************** */

// dot product
template <typename R>
R Vector<R, valid_real_number<R>>::dot(const Vector<R> &v) const
{
	Vector<R> tmp(*this);
	R result = static_cast<R>(0);
	for (size_t i = 0; i < tmp.size(); i++)
		result += tmp[i] * v[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX04                                    */
/* ************************************************************************** */

// manhattan norm
template <typename R>
R Vector<R, valid_real_number<R>>::norm_1(void) const
{
	R result = static_cast<R>(0);
	for (size_t i = 0; i < this->size(); i++)
		result += this->at(i) < static_cast<R>(0) ? -this->at(i) : this->at(i);
	return result;
}
// euclidean norm
template <typename R>
R Vector<R, valid_real_number<R>>::norm(void) const
{
	R result = static_cast<R>(0);
	for (size_t i = 0; i < this->size(); i++)
		result += std::pow(this->at(i), static_cast<R>(2));
	return std::pow(result, static_cast<R>(0.5));
}
// supremum norm
template <typename R>
R Vector<R, valid_real_number<R>>::norm_inf(void) const
{
	R result = this->at(0);
	for (size_t i = 1; i < this->size(); i++)
		result = std::max(result, this->at(i) < static_cast<R>(0) ? -this->at(i) : this->at(i));
	return result;
}
