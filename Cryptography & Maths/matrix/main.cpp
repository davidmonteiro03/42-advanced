/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 18:57:29 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mandatory/includes/ft_matrix.hpp"

using number_t = _Float32x;

int main(void)
{
	std::cout.precision(std::numeric_limits<number_t>::digits10);

	display::box("utils", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	utils::vector<number_t>();
	utils::matrix<number_t>();

	display::box("ex00", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex00::vector<number_t>();
	ex00::matrix<number_t>();

	display::box("ex01", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex01::vector<number_t>();

	display::box("ex02", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex02::realNumbers<number_t>();
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

	display::box("ex07", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex07::vector<number_t>();
	ex07::matrix<number_t>();

	display::box("ex08", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex08::matrix<number_t>();

	display::box("ex09", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex09::matrix<number_t>();

	display::box("ex10", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex10::matrix<number_t>();

	return 0;
}
