/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:27:19 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 19:49:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename R>
class Matrix : public std::vector<Vector<R>>
{
private:
	using std::vector<Vector<R>>::vector;

	ssize_t firstNonZeroPos(const Vector<R> &);
	void sortTheRowsByTheFirstNonZeroElement(void);
	void resetToZeroTheValuesBelowEachPivot(void);
	void resetToZeroTheValuesAboveEachPivot(void);
	void normalizeThePivotValues(void);

	Matrix<R> minorMatrix(const size_t &,
						  const size_t &) const;

public:
	Matrix<R> &operator+=(const Matrix<R> &);
	Matrix<R> &operator-=(const Matrix<R> &);
	Matrix<R> &operator*=(const R &);
	Vector<R> operator*(const Vector<R> &) const;
	Matrix<R> operator*(const Matrix<R> &) const;

	R trace(void) const;
	Matrix<R> transpose(void) const;
	Matrix<R> row_echelon(void) const;
	R determinant(void) const;
	Matrix<R> inverse(void) const;
};

template <typename R>
Matrix(std::initializer_list<std::initializer_list<R>>) -> Matrix<R>;
