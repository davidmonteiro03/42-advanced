/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:06:44 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:09:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Tool.hpp"

Tool::Tool(void) : _numberOfUses(0) {}

Tool::Tool(const Tool &copy) : _numberOfUses(copy._numberOfUses) {}

Tool &Tool::operator=(const Tool &other)
{
	if (this != &other)
	{
		this->_numberOfUses = other._numberOfUses;
	}
	return *this;
}

Tool::~Tool() {}

unsigned int Tool::getNumberOfUses(void) const { return this->_numberOfUses; }
