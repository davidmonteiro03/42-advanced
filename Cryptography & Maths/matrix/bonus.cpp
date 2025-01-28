/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 14:13:28 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bonus/includes/ft_matrix.hpp"

using real_t = _Float32x;
using complex_t = std::complex<_Float32x>;

int main(void)
{
	std::cout.precision(std::numeric_limits<real_t>::digits10);
	std::cerr.precision(std::numeric_limits<real_t>::digits10);

	display::box("utils", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	utils::vector<real_t>();
	utils::matrix<real_t>();

	display::box("ex00", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex00::vector<real_t>();
	ex00::matrix<real_t>();

	display::box("ex01", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex01::vector<real_t>();

	display::box("ex02", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex02::scalar<real_t>();
	ex02::vector<real_t>();
	ex02::matrix<real_t>();

	display::box("ex03", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex03::vector<real_t>();

	display::box("ex04", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex04::vector<real_t>();

	display::box("ex05", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex05::vector<real_t>();

	display::box("ex06", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex06::vector<real_t>();

	display::box("ex07", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex07::vector<real_t>();
	ex07::matrix<real_t>();

	display::box("ex08", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex08::matrix<real_t>();

	display::box("ex09", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex09::matrix<real_t>();

	display::box("ex10", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex10::matrix<real_t>();

	display::box("ex11", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex11::matrix<real_t>();

	display::box("ex12", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex12::matrix<real_t>();

	display::box("ex13", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex13::matrix<real_t>();

	display::box("ex14", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex14::matrix<real_t>();

	display::box("ex15", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex15::complex<complex_t>();

	return 0;
}
