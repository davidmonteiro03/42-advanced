/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:26:55 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 08:37:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template <typename R>
Matrix<R> &Matrix<R, valid_arithemic_field<R>>::operator+=(const Matrix<R> &v)
{
	Matrix<R> &u = *this;
	const shape_t uShape = matrix::utils::shape(u), vShape = matrix::utils::shape(v);
	if (uShape != vShape)
		throw std::invalid_argument("Matrix dimensions must be equal");
	for (size_t i = 0; i < uShape.first; i++)
		u[i] += v[i];
	return *this;
}

template <typename R>
Matrix<R> &Matrix<R, valid_arithemic_field<R>>::operator-=(const Matrix<R> &v)
{
	Matrix<R> &u = *this;
	const shape_t uShape = matrix::utils::shape(u), vShape = matrix::utils::shape(v);
	if (uShape != vShape)
		throw std::invalid_argument("Matrix dimensions must be equal");
	for (size_t i = 0; i < uShape.first; i++)
		u[i] -= v[i];
	return *this;
}

template <typename R>
Matrix<R> &Matrix<R, valid_arithemic_field<R>>::operator*=(const R &a)
{
	Matrix<R> &u = *this;
	const shape_t uShape = matrix::utils::shape(u);
	for (size_t i = 0; i < uShape.first; i++)
		u[i] *= a;
	return *this;
}
