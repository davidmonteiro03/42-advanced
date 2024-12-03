/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:38:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 16:40:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename C>
class Matrix : public std::vector<Vector<std::complex<C>>>
{
public:
	using std::vector<Vector<std::complex<C>>>::vector;
	// ex00
	Matrix<std::complex<C>> &operator+=(const Matrix<std::complex<C>> &); // add matrix
	Matrix<std::complex<C>> &operator-=(const Matrix<std::complex<C>> &); // subtract matrix
	Matrix<std::complex<C>> &operator*=(const std::complex<C> &);		  // scale matrix by a scalar
	// ex07
	Vector<std::complex<C>> mul_vec(const Vector<std::complex<C>> &); // multiply matrix by a vector
	Matrix<std::complex<C>> mul_mat(const Matrix<std::complex<C>> &); // multiply matrix by a matrix
	// ex08
	std::complex<C> trace(void) const; // trace
	// ex09
	Matrix<std::complex<C>> transpose(void); // transpose
	// ex10
	Matrix<std::complex<C>> row_echelon(void); // row-echelon form
	// ex11
	std::complex<C> determinant(void); // determinant
	// ex12
	Matrix<std::complex<C>> inverse(void); // inverse
	// ex13
	size_t rank(void); // rank
private:
	// ex10 (private helper functions for row-echelon form)
	ssize_t firstNonZeroPos(const Vector<std::complex<C>> &);			 // get the first non-zero element position (private helper function)
	void sortTheCowsByTheFirstNonZeroElement(Matrix<std::complex<C>> &); // sort the rows by the first non-zero element (private helper function)
	void resetToZeroTheValuesBelowEachPivot(Matrix<std::complex<C>> &);	 // reset to zero the values below each pivot (private helper function)
	void resetToZeroTheValuesAboveEachPivot(Matrix<std::complex<C>> &);	 // reset to zero the values above each pivot (private helper function)
	void normalizeThePivotValues(Matrix<std::complex<C>> &);			 // normalize the pivot values (private helper function)
	// ex11 (private helper functions for determinant)
	Matrix<std::complex<C>> minor_matrix(const size_t &, const size_t &); // minor matrix (private helper function)
};

#endif // !MATRIX_HPP
