/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:55:07 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:26 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOVEL_HPP
#define SHOVEL_HPP

class Shovel
{
public:
	Shovel(void);
	Shovel(const Shovel &);
	Shovel &operator=(const Shovel &);
	~Shovel();
	void use(void);
	unsigned int getNumberOfUses(void) const;

private:
	unsigned int _numberOfUses;
};

#endif // !SHOVEL_HPP
