/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:13:42 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/14 17:46:53 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstddef>
#include <vector>

template <typename T>
class Vector : public std::vector<T>
{
	public:
		Vector operator+(const Vector &other)
		{
			Vector tmp(*this);
			for (size_t i = 0; i < this->size(); i++)
				tmp[i] += other[i];
			return tmp;
		}
};

#endif // !VECTOR_HPP
