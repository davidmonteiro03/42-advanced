/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/23 18:31:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mandatory/includes/ft_matrix.hpp"
// #include <complex>

using number_t = _Float32x;

int main(void)
{
	std::cout.precision(std::numeric_limits<number_t>::digits10);
	std::cerr.precision(std::numeric_limits<number_t>::digits10);

	display::box("utils", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	utils::vector<number_t>();
	utils::matrix<number_t>();

	return 0;
}
