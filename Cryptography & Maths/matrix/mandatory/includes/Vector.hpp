/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:54 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/28 12:19:58 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <vector>
#include <cstddef>
#include <cmath>

class Vector : public std::vector<float>
{
public:
	using std::vector<float>::vector;
	// ex00
	Vector &operator+=(const Vector &); // add vector
	Vector &operator-=(const Vector &); // subtract vector
	Vector &operator*=(const float &);	// scale vector by a scalar
	// ex03
	float dot(const Vector &) const; // dot product
	// ex04
	float norm_1(void) const;	// manhattan norm
	float norm(void) const;		// euclidean norm
	float norm_inf(void) const; // supremum norm
};

#endif // !VECTOR_HPP
