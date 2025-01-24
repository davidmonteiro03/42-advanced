/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 09:16:21 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mandatory/includes/ft_matrix.hpp"

using number_t = _Float32x;

int main(void)
{
	std::cout.precision(std::numeric_limits<number_t>::digits10);
	std::cerr.precision(std::numeric_limits<number_t>::digits10);

	display::box("utils", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	utils::vector<number_t>();
	utils::matrix<number_t>();

	display::box("ex00", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex00::vector<number_t>();
	ex00::matrix<number_t>();

	display::box("ex01", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex01::vector<number_t>();

	return 0;
}
