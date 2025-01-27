/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 18:15:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bonus/includes/ft_matrix.hpp"

using number_t = _Float32x;

int main(void)
{
	std::cout.precision(std::numeric_limits<number_t>::digits10);
	std::cerr.precision(std::numeric_limits<number_t>::digits10);

	display::box("utils", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		utils::real::vector<number_t>();
		utils::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		utils::complex::vector<number_t>();
		utils::complex::matrix<number_t>();
	}

	display::box("ex00", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex00::real::vector<number_t>();
		ex00::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex00::complex::vector<number_t>();
		ex00::complex::matrix<number_t>();
	}

	display::box("ex01", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex01::real::vector<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex01::complex::vector<number_t>();
	}

	display::box("ex02", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex02::real::scalar<number_t>();
		ex02::real::vector<number_t>();
		ex02::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex02::complex::scalar<number_t>();
		ex02::complex::vector<number_t>();
		ex02::complex::matrix<number_t>();
	}

	display::box("ex03", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex03::real::vector<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex03::complex::vector<number_t>();
	}

	display::box("ex04", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex04::real::vector<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex04::complex::vector<number_t>();
	}

	display::box("ex05", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex05::real::vector<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex05::complex::vector<number_t>();
	}

	display::box("ex06", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex06::real::vector<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex06::complex::vector<number_t>();
	}

	display::box("ex07", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex07::real::vector<number_t>();
		ex07::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex07::complex::vector<number_t>();
		ex07::complex::matrix<number_t>();
	}

	display::box("ex08", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex08::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex08::complex::matrix<number_t>();
	}

	display::box("ex09", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex09::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex09::complex::matrix<number_t>();
	}

	display::box("ex10", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex10::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex10::complex::matrix<number_t>();
	}

	display::box("ex11", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex11::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex11::complex::matrix<number_t>();
	}

	display::box("ex12", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex12::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex12::complex::matrix<number_t>();
	}

	display::box("ex13", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		display::box("real", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex13::real::matrix<number_t>();
	}
	{
		display::box("complex", '/', '/', '/', '/', ' ', BOX_SIZE, '\n');
		ex13::complex::matrix<number_t>();
	}

	return 0;
}
