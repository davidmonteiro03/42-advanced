/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:38:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/05 17:51:22 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename R>
using valid_real_number = std::enable_if_t<std::is_floating_point<R>::value>;

typedef std::pair<size_t, size_t> m_shape;

template <typename R, typename Enable = void>
class Matrix;

template <typename R>
class Matrix<R, valid_real_number<R>> : public std::vector<Vector<R>>
{
public:
	using std::vector<Vector<R>>::vector;
	// ex00
	Matrix<R> &operator+=(const Matrix<R> &); // add matrix
	Matrix<R> &operator-=(const Matrix<R> &); // subtract matrix
	Matrix<R> &operator*=(const R &);		  // scale matrix by a scalar
	// ex07
	Vector<R> operator*(const Vector<R> &) const; // multiply matrix by a vector
	Matrix<R> operator*(const Matrix<R> &) const; // multiply matrix by a matrix
	// ex08
	R trace(void) const; // trace
	// ex09
	Matrix<R> transpose(void) const; // transpose
	// ex10
	Matrix<R> row_echelon(void) const; // row-echelon form
	// ex11
	R determinant(void) const; // determinant
	// ex12
	Matrix<R> inverse(void) const; // inverse
	// ex13
	size_t rank(void) const; // rank
private:
	// ex10 (private helper functions for row-echelon form)
	ssize_t firstNonZeroPos(const Vector<R> &) const;			 // get the first non-zero element position (private helper function)
	void sortTheRowsByTheFirstNonZeroElement(Matrix<R> &) const; // sort the rows by the first non-zero element (private helper function)
	void resetToZeroTheValuesBelowEachPivot(Matrix<R> &) const;	 // reset to zero the values below each pivot (private helper function)
	void resetToZeroTheValuesAboveEachPivot(Matrix<R> &) const;	 // reset to zero the values above each pivot (private helper function)
	void normalizeThePivotValues(Matrix<R> &) const;			 // normalize the pivot values (private helper function)
	// ex11 (private helper functions for determinant)
	Matrix<R> minor_matrix(const size_t &, const size_t &) const; // minor matrix (private helper function)
};
