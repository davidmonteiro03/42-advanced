/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:58:30 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 11:46:46 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "Vector.hpp"
#include "Matrix.hpp"

class Utils
{
	public:
		template<typename T>
		static bool matrix_is_square(const Matrix<T> &);
		template<typename T>
		static Matrix<T> reshape_vector_into_matrix(const Vector<T> &, const size_t &, const size_t &);
		template<typename T>
		static Vector<T> reshape_matrix_into_vector(const Matrix<T> &);
	private:
		Utils(void);
		~Utils();
};

#include "../tmps/Utils.tpp"

#endif // !UTILS_HPP
