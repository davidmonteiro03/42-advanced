/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 15:12:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bonus/includes/ft_matrix.hpp"

using real_t = _Float32x;
using complex_t = std::complex<_Float32x>;

int main(void)
{
	std::cout.precision(std::numeric_limits<real_t>::digits10);
	std::cerr.precision(std::numeric_limits<real_t>::digits10);

	display::box("ex14", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex14::matrix<real_t>();

	display::box("ex15", '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	ex15::complex<complex_t>();

	return 0;
}
