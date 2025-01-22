/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:40 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/22 18:28:18 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/ft_matrix.hpp"

template <typename K>
Vector<K>::Vector(std::initializer_list<K> data)
{
	this->_data = NULL;
	this->_size = data.size();
	if (this->_size == 0)
		return;
	this->_data = new K[this->_size];
	if (this->_data == NULL)
		return;
	size_t i = 0;
	for (const K &value : data)
		this->_data[i++] = value;
}

template <typename K>
Vector<K>::~Vector()
{
	if (this->_data == NULL)
		return;
	delete[] this->_data;
}

template <typename K>
K &Vector<K>::operator[](const size_t &index)
{
	if (index < 0 || index > this->_size)
		throw std::invalid_argument("Index out of range.");
	return this->_data[index];
}

template <typename K>
std::ostream &operator<<(std::ostream &os, const Vector<K> &vector)
{
	os << &vector;
	return os;
}
