/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:38:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/28 12:19:56 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <cstddef>
#include "Vector.hpp"

class Matrix : public std::vector<Vector>
{
public:
	using std::vector<Vector>::vector;
	// ex00
	Matrix &operator+=(const Matrix &); // add matrix
	Matrix &operator-=(const Matrix &); // subtract matrix
	Matrix &operator*=(const float &);	// scale matrix by a scalar
	// ex07
	Vector mul_vec(const Vector &); // multiply matrix by a vector
	Matrix mul_mat(const Matrix &); // multiply matrix by a matrix
	// ex08
	float trace(void) const; // trace
	// ex09
	Matrix transpose(void); // transpose
	// ex10
	Matrix row_echelon(void); // row-echelon form
private:
	// ex10 (private helper functions for row-echelon form)
	ssize_t firstNonZeroPos(const Vector &);				 // get the first non-zero element position (private helper function)
	void sortTheRowsByTheFirstNonZeroElement(Matrix &);		 // sort the rows by the first non-zero element (private helper function)
	void resetToZeroTheValuesBelowEachPivot(Matrix &matrix); // reset to zero the values below each pivot (private helper function)
	void resetToZeroTheValuesAboveEachPivot(Matrix &matrix); // reset to zero the values above each pivot (private helper function)
	void normalizeThePivotValues(Matrix &matrix);			 // normalize the pivot values (private helper function)
};

#endif // !MATRIX_HPP
