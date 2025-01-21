/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:27:19 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 18:10:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename R>
class Matrix : public std::vector<Vector<R>>
{
private:
	using std::vector<Vector<R>>::vector;

public:
	Matrix<R> &operator+=(const Matrix<R> &);
	Matrix<R> &operator-=(const Matrix<R> &);
	Matrix<R> &operator*=(const R &);
	Vector<R> operator*(const Vector<R> &) const;
	Matrix<R> operator*(const Matrix<R> &) const;
	R trace(void) const;
	Matrix<R> transpose(void) const;
	Matrix<R> row_echelon(void) const;
};

template <typename R>
Matrix(std::initializer_list<std::initializer_list<R>>) -> Matrix<R>;
