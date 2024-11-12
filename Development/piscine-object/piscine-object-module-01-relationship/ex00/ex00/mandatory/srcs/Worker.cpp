/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:42:31 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:28:34 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Worker.hpp"

Worker::Worker(void) : _coordonnee(),
					   _stat(),
					   _tool(NULL) {}

Worker::Worker(const int x,
			   const int y,
			   const int z,
			   const int level,
			   const int exp) : _coordonnee(x, y, z),
								_stat(level, exp),
								_tool(NULL) {}

Worker::Worker(const Worker &copy) : _coordonnee(copy._coordonnee),
									 _stat(copy._stat),
									 _tool(NULL) {}

Worker &Worker::operator=(const Worker &other)
{
	if (this != &other)
	{
		this->_coordonnee = other._coordonnee;
		this->_stat = other._stat;
		this->_tool = other._tool;
	}
	return *this;
}

Worker::~Worker() {}

const Position &Worker::getCoordonnee(void) const { return this->_coordonnee; }

const Statistic &Worker::getStat(void) const { return this->_stat; }

const Tool *Worker::getTool(void) const { return this->_tool; }

void Worker::useTool(Tool *tool)
{
	if (tool == NULL)
		return;
	if (this->_tool != tool)
		this->_tool = tool;
	this->_tool->use();
}

void Worker::unuseTool(void)
{
	if (this->_tool == NULL)
		return;
	this->_tool = NULL;
}
