/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:54 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 16:38:26 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

template <typename C>
class Vector : public std::vector<std::complex<C>>
{
public:
	using std::vector<std::complex<C>>::vector;
	// ex00
	Vector<std::complex<C>> &operator+=(const Vector<std::complex<C>> &); // add vector
	Vector<std::complex<C>> &operator-=(const Vector<std::complex<C>> &); // subtract vector
	Vector<std::complex<C>> &operator*=(const std::complex<C> &);		  // scale vector by a scalar
	// ex03
	std::complex<C> dot(const Vector<std::complex<C>> &) const; // dot product
	// ex04
	std::complex<C> norm_1(void) const;	  // manhattan norm
	std::complex<C> norm(void) const;	  // euclidean norm
	std::complex<C> norm_inf(void) const; // supremum norm
};

#endif // !VECTOR_HPP
