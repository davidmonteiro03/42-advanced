/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:08:00 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/14 17:47:29 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Vector.hpp"

int main(void)
{
	Vector<float> vector1, vector2;
	for (size_t i = 0; i < 10; i++)
		vector1.push_back(i + 1);
	for (size_t i = 0; i < 10; i++)
		vector2.push_back((i + 1) * 2);
	vector1 = vector1 + vector2;
	for (size_t i = 0; i < 10; i++)
		std::cout << vector1[i] << std::endl;
	return (0);
}
