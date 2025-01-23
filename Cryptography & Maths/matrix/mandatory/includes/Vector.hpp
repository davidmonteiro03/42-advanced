/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:09:08 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/23 16:37:34 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename K>
class Vector : public std::vector<K>
{
private:
	using std::vector<K>::vector;
};

template <typename K>
Vector(std::initializer_list<K>) -> Vector<K>;

template <typename K>
std::ostream &operator<<(std::ostream &, const Vector<K> &);
