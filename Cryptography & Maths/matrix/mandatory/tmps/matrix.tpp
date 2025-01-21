/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:48:44 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 09:02:26 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace matrix
{
	namespace utils
	{
		template <typename R>
		const shape_t shape(const Matrix<R> &mat)
		{
			const size_t m = mat.size();
			if (m == 0)
				return shape_t(0, 0);
			const size_t n = mat[0].size();
			for (size_t i = 0; i < m; i++)
				if (mat[i].size() != n)
					throw std::invalid_argument("Matrix is not rectangular");
			return shape_t(m, n);
		}

		template <typename R>
		bool is_square(const Matrix<R> &mat)
		{
			const shape_t matShape = shape(mat);
			return matShape.first == matShape.second;
		}

		template <typename R>
		Vector<R> reshape(const Matrix<R> &mat)
		{
			const shape_t matShape = shape(mat);
			const size_t vecSize = matShape.first * matShape.second;
			Vector<R> vec(vecSize);
			for (size_t i = 0; i < matShape.first; i++)
				for (size_t j = 0; j < matShape.second; j++)
					vec[i * matShape.second + j] = mat[i][j];
			return vec;
		}
	}
}

template <typename A,
		  typename B>
std::ostream &operator<<(std::ostream &os,
						 const std::pair<A,
										 B> &pair)
{
	os << '(' << pair.first << ", " << pair.second << ')';
	return os;
}

template <typename R>
std::ostream &operator<<(std::ostream &os,
						 const Matrix<R> &mat)
{
	const shape_t matShape = matrix::utils::shape(mat);
	os << '[';
	for (size_t i = 0; i < matShape.first; i++)
	{
		if (i > 0)
			os << std::endl
			   << ' ';
		os << mat[i];
	}
	os << ']';
	return os;
}

template <typename R>
Matrix<R> operator+(const Matrix<R> &u,
					const Matrix<R> &v)
{
	const shape_t uShape = matrix::utils::shape(u),
				  vShape = matrix::utils::shape(v);
	if (uShape != vShape)
		throw std::invalid_argument("Matrices must have the same shape");
	Matrix<R> res(uShape.first);
	for (size_t i = 0; i < uShape.first; i++)
		res[i] = u[i] + v[i];
	return res;
}

template <typename R>
Matrix<R> operator-(const Matrix<R> &u,
					const Matrix<R> &v)
{
	const shape_t uShape = matrix::utils::shape(u),
				  vShape = matrix::utils::shape(v);
	if (uShape != vShape)
		throw std::invalid_argument("Matrices must have the same shape");
	Matrix<R> res(uShape.first);
	for (size_t i = 0; i < uShape.first; i++)
		res[i] = u[i] - v[i];
	return res;
}

template <typename R>
Matrix<R> operator*(const Matrix<R> &u,
					const R &a)
{
	const shape_t uShape = matrix::utils::shape(u);
	Matrix<R> res(uShape.first);
	for (size_t i = 0; i < uShape.first; i++)
		res[i] = u[i] * a;
	return res;
}

template <typename R>
Matrix<R> operator*(const R &a,
					const Matrix<R> &v)
{
	const shape_t vShape = matrix::utils::shape(v);
	Matrix<R> res(vShape.first);
	for (size_t i = 0; i < vShape.first; i++)
		res[i] = v[i] * a;
	return res;
}
