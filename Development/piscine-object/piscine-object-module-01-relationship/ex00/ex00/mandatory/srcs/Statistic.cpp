/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Statistic.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:15:22 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Statistic.hpp"

Statistic::Statistic(void) : _level(0),
							 _exp(0) {}

Statistic::Statistic(const int level,
					 const int exp) : _level(level),
									  _exp(exp) {}

Statistic::Statistic(const Statistic &copy) : _level(copy._level),
											  _exp(copy._exp) {}

Statistic &Statistic::operator=(const Statistic &other)
{
	if (this != &other)
	{
		this->_level = other._level;
		this->_exp = other._exp;
	}
	return *this;
}

Statistic::~Statistic() {}
