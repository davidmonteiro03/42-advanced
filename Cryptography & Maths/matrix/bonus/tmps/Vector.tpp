/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:39:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 13:53:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

/* ************************************************************************** */
/*                                    EX00                                    */
/* ************************************************************************** */

// add vector
template<typename T>
Vector<T> &Vector<T>::operator+=(const Vector<T> &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) += other[i];
	return *this;
}
// subtract vector
template<typename T>
Vector<T> &Vector<T>::operator-=(const Vector<T> &other)
{
	for (size_t i = 0; i < this->size(); i++)
		this->at(i) -= other[i];
	return *this;
}
// scale vector by a scalar
template<typename T>
Vector<T> &Vector<T>::operator*=(const T &scalar)
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
template<typename T>
T Vector<T>::dot(const Vector<T> &other) const
{
	Vector tmp(*this);
	T result = 0;
	for (size_t i = 0; i < tmp.size(); i++)
		result += tmp[i] * other[i];
	return result;
}

/* ************************************************************************** */
/*                                    EX04                                    */
/* ************************************************************************** */

// manhattan norm
template<typename T>
T Vector<T>::norm_1(void) const
{
	T result = 0;
	for (size_t i = 0; i < this->size(); i++)
	{
		T num = (*this)[i];
		result += num < 0 ? -num : num;
	}
	return result;
}
// euclidean norm
template<typename T>
T Vector<T>::norm(void) const
{
	T result = 0;
	for (size_t i = 0; i < this->size(); i++)
		result += std::pow((*this)[i], 2);
	return std::pow(result, 0.5);
}
// supremum norm
template<typename T>
T Vector<T>::norm_inf(void) const
{
	T result = (*this)[0];
	for (size_t i = 1; i < this->size(); i++)
	{
		T num = (*this)[i];
		T tmp = num < 0 ? -num : num;
		result = std::max(result, tmp);
	}
	return result;
}
