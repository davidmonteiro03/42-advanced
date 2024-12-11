/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:27:19 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 13:05:53 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename R>
using valid_arithemic_field = std::enable_if_t<std::is_arithmetic<R>::value>;

template <typename R, typename Enable = void>
class Matrix;

template <typename R>
class Matrix<R, valid_arithemic_field<R>> : public std::vector<Vector<R>>
{
private:
	using std::vector<Vector<R>>::vector;
public:
	Matrix<R> &operator+=(const Matrix<R> &);
	Matrix<R> &operator-=(const Matrix<R> &);
	Matrix<R> &operator*=(const R &);
};

template <typename R>
Matrix(std::initializer_list<std::initializer_list<R>>) -> Matrix<R>;
