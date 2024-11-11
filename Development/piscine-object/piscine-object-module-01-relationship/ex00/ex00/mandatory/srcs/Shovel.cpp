/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:01:28 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:41 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Shovel.hpp"

Shovel::Shovel(void) : _numberOfUses(0) {}

Shovel::Shovel(const Shovel &copy) : _numberOfUses(copy._numberOfUses) {}

Shovel &Shovel::operator=(const Shovel &other)
{
	if (this != &other)
	{
		this->_numberOfUses = other._numberOfUses;
	}
	return *this;
}

Shovel::~Shovel() {}

void Shovel::use(void) { this->_numberOfUses++; }

unsigned int Shovel::getNumberOfUses(void) const { return this->_numberOfUses; }
