/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:54 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 14:03:04 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

template <typename T>
class Vector : public std::vector<T>
{
public:
	using std::vector<T>::vector;
	// ex00
	Vector<T> &operator+=(const Vector<T> &); // add vector
	Vector<T> &operator-=(const Vector<T> &); // subtract vector
	Vector<T> &operator*=(const T &);		  // scale vector by a scalar
	// ex03
	T dot(const Vector<T> &) const; // dot product
	// ex04
	T norm_1(void) const;	// manhattan norm
	T norm(void) const;		// euclidean norm
	T norm_inf(void) const; // supremum norm
};

#endif // !VECTOR_HPP
