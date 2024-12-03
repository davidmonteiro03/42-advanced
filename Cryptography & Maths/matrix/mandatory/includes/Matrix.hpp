/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:38:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 16:29:36 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename R>
class Matrix : public std::vector<Vector<R>>
{
public:
	using std::vector<Vector<R>>::vector;
	// ex00
	Matrix<R> &operator+=(const Matrix<R> &); // add matrix
	Matrix<R> &operator-=(const Matrix<R> &); // subtract matrix
	Matrix<R> &operator*=(const R &);		  // scale matrix by a scalar
	// ex07
	Vector<R> mul_vec(const Vector<R> &); // multiply matrix by a vector
	Matrix<R> mul_mat(const Matrix<R> &); // multiply matrix by a matrix
	// ex08
	R trace(void) const; // trace
	// ex09
	Matrix<R> transpose(void); // transpose
	// ex10
	Matrix<R> row_echelon(void); // row-echelon form
	// ex11
	R determinant(void); // determinant
	// ex12
	Matrix<R> inverse(void); // inverse
	// ex13
	size_t rank(void); // rank
private:
	// ex10 (private helper functions for row-echelon form)
	ssize_t firstNonZeroPos(const Vector<R> &);			   // get the first non-zero element position (private helper function)
	void sortTheRowsByTheFirstNonZeroElement(Matrix<R> &); // sort the rows by the first non-zero element (private helper function)
	void resetToZeroTheValuesBelowEachPivot(Matrix<R> &);  // reset to zero the values below each pivot (private helper function)
	void resetToZeroTheValuesAboveEachPivot(Matrix<R> &);  // reset to zero the values above each pivot (private helper function)
	void normalizeThePivotValues(Matrix<R> &);			   // normalize the pivot values (private helper function)
	// ex11 (private helper functions for determinant)
	Matrix<R> minor_matrix(const size_t &, const size_t &); // minor matrix (private helper function)
};

#endif // !MATRIX_HPP
