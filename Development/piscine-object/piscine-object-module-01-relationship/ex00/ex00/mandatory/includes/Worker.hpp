/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:37:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:36:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
#define WORKER_HPP

#include <cstddef>
#include <vector>
#include "Position.hpp"
#include "Statistic.hpp"
#include "Tool.hpp"
#include "Workshop.hpp"

class Worker
{
public:
	Worker(void);
	Worker(const int, const int, const int, const int, const int);
	Worker(const Worker &);
	Worker &operator=(const Worker &);
	~Worker();
	const Position &getCoordonnee(void) const;
	const Statistic &getStat(void) const;
	const Tool *getTool(void) const;
	void useTool(Tool *);
	void unuseTool(void);

private:
	Position _coordonnee;
	Statistic _stat;
	Tool *_tool;
	std::vector<Workshop *> _workshops;
};

#endif // !WORKER_HPP
