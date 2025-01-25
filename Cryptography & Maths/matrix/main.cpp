/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 22:26:18 by dcaetano         ###   ########.fr       */
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

	display::box("ex01", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex01::vector<number_t>();

	display::box("ex02", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex02::scalar<number_t>();
	ex02::vector<number_t>();
	ex02::matrix<number_t>();

	display::box("ex03", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex03::vector<number_t>();

	display::box("ex04", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex04::vector<number_t>();

	display::box("ex05", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex05::vector<number_t>();

	display::box("ex06", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex06::vector<number_t>();

	return 0;
}
