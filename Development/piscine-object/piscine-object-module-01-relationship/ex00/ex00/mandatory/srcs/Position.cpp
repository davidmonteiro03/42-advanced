/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Position.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:07:55 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Position.hpp"

Position::Position(void) : _x(0),
						   _y(0),
						   _z(0) {}

Position::Position(const int x,
				   const int y,
				   const int z) : _x(x),
								  _y(y),
								  _z(z) {}

Position::Position(const Position &copy) : _x(copy._x),
										   _y(copy._y),
										   _z(copy._z) {}

Position &Position::operator=(const Position &other)
{
	if (this != &other)
	{
		this->_x = other._x;
		this->_y = other._y;
		this->_z = other._z;
	}
	return *this;
}

Position::~Position() {}
