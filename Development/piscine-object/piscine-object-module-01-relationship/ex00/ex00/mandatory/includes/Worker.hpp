/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:37:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:45:07 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
#define WORKER_HPP

#include <cstddef>
#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"

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
	const Shovel *getShovel(void) const;
	void useShovel(Shovel *);
	void unuseShovel(void);

private:
	Position _coordonnee;
	Statistic _stat;
	Shovel *_shovel;
};

#endif // !WORKER_HPP
