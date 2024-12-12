/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 10:40:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mandatory/includes/ft_matrix.hpp"

int main(void)
{
	display::box("utils", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	utils::vector();
	utils::matrix();
	display::box("ex00", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex00::vector();
	ex00::matrix();
	return 0;
}
