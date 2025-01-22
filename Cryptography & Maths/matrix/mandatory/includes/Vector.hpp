/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:08 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/22 17:46:03 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename K>
class Vector
{
private:
	K *_data;
	size_t _size;

public:
	Vector(std::initializer_list<K>);
	~Vector();

	K &operator[](const size_t &);
};

template <typename K>
std::ostream &operator<<(std::ostream &, const Vector<K> &);

template <typename K>
Vector(std::initializer_list<K>) -> Vector<K>;
