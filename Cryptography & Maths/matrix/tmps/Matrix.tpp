/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:25:47 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 17:03:42 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_TPP
#define MATRIX_TPP

#include <stdexcept>
#include "../includes/Matrix.hpp"

template <typename T>
Matrix<T>::Matrix(void) : _n(0),
						  _m(0),
						  _data(nullptr) {}

template <typename T>
Matrix<T>::Matrix(const size_t &n,
				  const size_t &m) : _n(n),
									 _m(m),
									 _data(new T *[n])
{
	for (size_t i = 0; i < this->_n; i++)
	{
		this->_data[i] = new T[this->_m];
		for (size_t j = 0; j < this->_m; j++)
			this->_data[i][j] = T();
	}
}

template <typename T>
Matrix<T>::Matrix(const std::initializer_list<std::initializer_list<T>> &data) : _n(data.size()),
																				 _m(data.begin()->size()),
																				 _data(new T *[data.size()])
{
	for (size_t i = 0; i < this->_n; i++)
	{
		if (data.begin()[i].size() != this->_m)
		{
			delete[] this->_data;
			throw std::invalid_argument("Invalid initializer list");
		}
	}
	for (size_t i = 0; i < this->_n; i++)
		this->_data[i] = new T[this->_m];
	size_t i = 0;
	for (const auto &row : data)
		std::copy(row.begin(), row.end(), this->_data[i++]);
}

template <typename T>
Matrix<T>::Matrix(const Matrix &copy) : _n(copy._n),
										_m(copy._m),
										_data(new T *[copy._n])
{
	for (size_t i = 0; i < this->_n; i++)
	{
		this->_data[i] = new T[this->_m];
		std::copy(copy._data[i], copy._data[i] + this->_m, this->_data[i]);
	}
}

template <typename T>
Matrix<T> &Matrix<T>::operator=(const Matrix<T> &other)
{
	if (this != &other)
	{
		if (this->_data != nullptr)
		{
			for (size_t i = 0; i < this->_n; i++)
				if (this->_data[i] != nullptr)
					delete[] this->_data[i];
			delete[] this->_data;
		}
		this->_n = other._n;
		this->_m = other._m;
		this->_data = new T *[this->_n];
		for (size_t i = 0; i < this->_n; i++)
		{
			this->_data[i] = new T[this->_m];
			for (size_t j = 0; j < this->_m; j++)
				this->_data[i][j] = other._data[i][j];
		}
	}
	return *this;
}

template <typename T>
Matrix<T>::~Matrix()
{
	if (this->_data != nullptr)
	{
		for (size_t i = 0; i < this->_n; i++)
			if (this->_data[i] != nullptr)
				delete[] this->_data[i];
		delete[] this->_data;
	}
}

template <typename T>
const std::pair<size_t, size_t> Matrix<T>::shape(void) const { return std::make_pair(this->_n, this->_m); }

template <typename T>
T *Matrix<T>::operator[](const size_t &idx)
{
	if (idx >= this->_n)
		throw std::out_of_range("Index out of range");
	return this->_data[idx];
}

template <typename T>
const T *Matrix<T>::operator[](const size_t &idx) const
{
	if (idx >= this->_n)
		throw std::out_of_range("Index out of range");
	return this->_data[idx];
}

template <typename T>
Matrix<T> &Matrix<T>::operator+=(const Matrix<T> &other)
{
	for (size_t i = 0; i < this->_n; i++)
		for (size_t j = 0; j < this->_m; j++)
			this->_data[i][j] += other[i][j];
	return *this;
}

template <typename T>
Matrix<T> &Matrix<T>::operator-=(const Matrix<T> &other)
{
	for (size_t i = 0; i < this->_n; i++)
		for (size_t j = 0; j < this->_m; j++)
			this->_data[i][j] -= other[i][j];
	return *this;
}

template <typename T>
Matrix<T> &Matrix<T>::operator*=(const T &scalar)
{
	for (size_t i = 0; i < this->_n; i++)
		for (size_t j = 0; j < this->_m; j++)
			this->_data[i][j] *= scalar;
	return *this;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Matrix<T> &matrix)
{
	os << '[';
	for (size_t i = 0; i < matrix.shape().first; i++)
	{
		if (i > 0)
			os << std::endl
			   << ' ';
		os << '[';
		for (size_t j = 0; j < matrix.shape().second; j++)
		{
			if (j > 0)
				os << ", ";
			os << matrix[i][j];
		}
		os << ']';
	}
	os << ']';
	return os;
}

#endif // !MATRIX_TPP
