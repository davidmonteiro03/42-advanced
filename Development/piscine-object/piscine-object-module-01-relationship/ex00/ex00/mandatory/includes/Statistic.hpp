/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Statistic.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:13:48 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:31 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATISTIC_HPP
#define STATISTIC_HPP

struct Statistic
{
	int _level, _exp;
	Statistic(void);
	Statistic(const int, const int);
	Statistic(const Statistic &);
	Statistic &operator=(const Statistic &);
	~Statistic();
};

#endif // !STATISTIC_HPP
