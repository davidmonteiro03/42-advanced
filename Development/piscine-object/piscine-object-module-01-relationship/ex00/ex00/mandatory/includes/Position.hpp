/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Position.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:20 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSITION_HPP
#define POSITION_HPP

struct Position
{
	int _x, _y, _z;
	Position(void);
	Position(const int, const int, const int);
	Position(const Position &);
	Position &operator=(const Position &);
	~Position();
};

#endif // !POSITION_HPP
