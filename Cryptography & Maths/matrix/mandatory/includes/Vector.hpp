/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:54 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 16:30:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

template <typename R>
class Vector : public std::vector<R>
{
public:
	using std::vector<R>::vector;
	// ex00
	Vector<R> &operator+=(const Vector<R> &); // add vector
	Vector<R> &operator-=(const Vector<R> &); // subtract vector
	Vector<R> &operator*=(const R &);		  // scale vector by a scalar
	// ex03
	R dot(const Vector<R> &) const; // dot product
	// ex04
	R norm_1(void) const;	// manhattan norm
	R norm(void) const;		// euclidean norm
	R norm_inf(void) const; // supremum norm
};

#endif // !VECTOR_HPP
