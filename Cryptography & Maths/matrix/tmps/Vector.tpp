/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:53:10 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 10:45:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_TPP
#define VECTOR_TPP

#include <stdexcept>
#include "../includes/Vector.hpp"

template <typename T>
Vector<T>::Vector(void) : _size(0),
						  _data(nullptr) {}

template <typename T>
Vector<T>::Vector(const size_t &size) : _size(size),
										_data(nullptr)
{
	this->_data = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_data[i] = T();
}

template <typename T>
Vector<T>::Vector(const Vector<T> &copy) : _size(copy._size),
										   _data(nullptr)
{
	this->_data = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_data[i] = copy._data[i];
}

template <typename T>
Vector<T> &Vector<T>::operator=(const Vector<T> &other)
{
	if (this != &other)
	{
		if (this->_data != nullptr)
			delete[] this->_data;
		this->_size = other._size;
		this->_data = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
			this->_data[i] = other._data[i];
	}
	return *this;
}

template <typename T>
Vector<T>::~Vector()
{
	if (this->_data != nullptr)
		delete[] this->_data;
}

template <typename T>
size_t Vector<T>::size(void) const { return this->_size; }

template <typename T>
T &Vector<T>::operator[](const size_t &idx)
{
	if (idx >= this->_size)
		throw std::out_of_range("Index out of range");
	return this->_data[idx];
}

template <typename T>
const T &Vector<T>::operator[](const size_t &idx) const
{
	if (idx >= this->_size)
		throw std::out_of_range("Index out of range");
	return this->_data[idx];
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Vector<T> &vector)
{
	os << '[';
	for (size_t i = 0; i < vector.size(); i++)
	{
		if (i > 0)
			os << ", ";
		os << vector[i];
	}
	os << ']';
	return os;
}

#endif // !VECTOR_TPP
