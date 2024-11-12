/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:50:41 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:37:17 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mandatory/includes/Worker.hpp"
#include "mandatory/includes/Shovel.hpp"
#include "mandatory/includes/Hammer.hpp"

int main(void)
{
	Tool *shovel = new Shovel();
	Tool *hammer = new Hammer();
	Worker w1, w2;
	w1.useTool(shovel);
	w1.useTool(shovel);
	w1.useTool(shovel);
	w2.useTool(shovel);
	w1.useTool(shovel);
	w1.useTool(hammer);
	w2.useTool(hammer);
	w1.useTool(hammer);
	w1.useTool(hammer);
	w2.useTool(hammer);
	w1.useTool(hammer);
	w1.useTool(hammer);
	w2.useTool(hammer);
	w1.useTool(hammer);
	w1.useTool(hammer);
	std::cout << "shovel uses: " << shovel->getNumberOfUses() << std::endl;
	std::cout << "hammer uses: " << hammer->getNumberOfUses() << std::endl;
	delete shovel;
	delete hammer;
	return 0;
}
