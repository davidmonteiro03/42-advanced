/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:42:31 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:51:33 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Worker.hpp"

Worker::Worker(void) : _coordonnee(),
					   _stat(),
					   _shovel(NULL) {}

Worker::Worker(const int x,
			   const int y,
			   const int z,
			   const int level,
			   const int exp) : _coordonnee(x, y, z),
								_stat(level, exp),
								_shovel(NULL) {}

Worker::Worker(const Worker &copy) : _coordonnee(copy._coordonnee),
									 _stat(copy._stat),
									 _shovel(NULL) {}

Worker &Worker::operator=(const Worker &other)
{
	if (this != &other)
	{
		this->_coordonnee = other._coordonnee;
		this->_stat = other._stat;
		this->_shovel = other._shovel;
	}
	return *this;
}

Worker::~Worker() {}

const Position &Worker::getCoordonnee(void) const { return this->_coordonnee; }

const Statistic &Worker::getStat(void) const { return this->_stat; }

const Shovel *Worker::getShovel(void) const { return this->_shovel; }

void Worker::useShovel(Shovel *shovel)
{
	if (shovel == NULL)
		return;
	if (this->_shovel != shovel)
		this->_shovel = shovel;
	this->_shovel->use();
}

void Worker::unuseShovel(void)
{
	if (this->_shovel == NULL)
		return;
	this->_shovel = NULL;
}
