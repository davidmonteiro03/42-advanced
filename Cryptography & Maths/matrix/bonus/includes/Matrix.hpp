/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:38:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 14:03:43 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix : public std::vector<Vector<T>>
{
public:
	using std::vector<Vector<T>>::vector;
	// ex00
	Matrix<T> &operator+=(const Matrix<T> &); // add matrix
	Matrix<T> &operator-=(const Matrix<T> &); // subtract matrix
	Matrix<T> &operator*=(const T &);		  // scale matrix by a scalar
	// ex07
	Vector<T> mul_vec(const Vector<T> &); // multiply matrix by a vector
	Matrix<T> mul_mat(const Matrix<T> &); // multiply matrix by a matrix
	// ex08
	T trace(void) const; // trace
	// ex09
	Matrix<T> transpose(void); // transpose
	// ex10
	Matrix<T> row_echelon(void); // row-echelon form
	// ex11
	T determinant(void); // determinant
	// ex12
	Matrix<T> inverse(void); // inverse
	// ex13
	size_t rank(void); // rank
private:
	// ex10 (private helper functions for row-echelon form)
	ssize_t firstNonZeroPos(const Vector<T> &);			   // get the first non-zero element position (private helper function)
	void sortTheRowsByTheFirstNonZeroElement(Matrix<T> &); // sort the rows by the first non-zero element (private helper function)
	void resetToZeroTheValuesBelowEachPivot(Matrix<T> &);  // reset to zero the values below each pivot (private helper function)
	void resetToZeroTheValuesAboveEachPivot(Matrix<T> &);  // reset to zero the values above each pivot (private helper function)
	void normalizeThePivotValues(Matrix<T> &);			   // normalize the pivot values (private helper function)
	// ex11 (private helper functions for determinant)
	Matrix minor_matrix(const size_t &, const size_t &); // minor matrix (private helper function)
};

#endif // !MATRIX_HPP
