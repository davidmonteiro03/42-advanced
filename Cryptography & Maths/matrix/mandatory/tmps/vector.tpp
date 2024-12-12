/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:24:12 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 08:41:59 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace vector
{
	namespace utils
	{
		template <typename R>
		size_t size(const Vector<R> &vec) { return vec.size(); }

		template <typename R>
		Matrix<R> reshape(const Vector<R> &vec,
						  const size_t &m,
						  const size_t &n)
		{
			const size_t vecSize = size(vec);
			if (m * n != vecSize)
				throw std::invalid_argument("Invalid shape");
			Matrix<R> mat(m);
			for (size_t i = 0; i < m; i++)
			{
				mat[i] = Vector<R>(n);
				for (size_t j = 0; j < n; j++)
					mat[i][j] = vec[i * n + j];
			}
			return mat;
		}
	}
}

template <typename R>
std::ostream &operator<<(std::ostream &os,
						 const Vector<R> &vec)
{
	os << '[';
	const size_t vecSize = vector::utils::size(vec);
	for (size_t i = 0; i < vecSize; i++)
	{
		if (i > 0)
			os << ' ';
		os << vec[i];
	}
	os << ']';
	return os;
}

template <typename R>
Vector<R> operator+(const Vector<R> &u,
					const Vector<R> &v)
{
	const size_t uSize = vector::utils::size(u), vSize = vector::utils::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	Vector<R> res(uSize);
	for (size_t i = 0; i < uSize; i++)
		res[i] = u[i] + v[i];
	return res;
}

template <typename R>
Vector<R> operator-(const Vector<R> &u,
					const Vector<R> &v)
{
	const size_t uSize = vector::utils::size(u), vSize = vector::utils::size(v);
	if (uSize != vSize)
		throw std::invalid_argument("Vectors must have the same size");
	Vector<R> res(uSize);
	for (size_t i = 0; i < uSize; i++)
		res[i] = u[i] - v[i];
	return res;
}

template <typename R>
Vector<R> operator*(const Vector<R> &u,
					const R &a)
{
	const size_t uSize = vector::utils::size(u);
	Vector<R> res(uSize);
	for (size_t i = 0; i < uSize; i++)
	{
		if (u[i] != 0 && a != 0)
			res[i] = u[i] * a;
		else
			res[i] = 0;
	}
	return res;
}

template <typename R>
Vector<R> operator*(const R &a,
					const Vector<R> &v)
{
	const size_t vSize = vector::utils::size(v);
	Vector<R> res(vSize);
	for (size_t i = 0; i < vSize; i++)
	{
		if (v[i] != 0 && a != 0)
			res[i] = v[i] * a;
		else
			res[i] = 0;
	}
	return res;
}
