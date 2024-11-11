/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:50:41 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/11 17:55:41 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mandatory/includes/Worker.hpp"

int main(void)
{
	Shovel shovel;
	{
		Worker w1;
		std::cout << w1.getShovel() << std::endl;
		w1.useShovel(&shovel);
		std::cout << w1.getShovel() << std::endl;
	}
	{
		Worker w1;
		std::cout << w1.getShovel() << std::endl;
		w1.useShovel(&shovel);
		std::cout << w1.getShovel() << std::endl;
	}
	{
		Worker w1, w2;
		std::cout << w1.getShovel() << " " << w2.getShovel() << std::endl;
		w1.useShovel(&shovel);
		std::cout << w1.getShovel() << " " << w2.getShovel() << std::endl;
		w2.useShovel(&shovel);
		std::cout << w1.getShovel() << " " << w2.getShovel() << std::endl;
	}
	std::cout << shovel.getNumberOfUses() << std::endl;
	return 0;
}
