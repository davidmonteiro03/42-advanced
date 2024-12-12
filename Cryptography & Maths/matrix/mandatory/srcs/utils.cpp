/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:37:31 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 11:21:28 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace utils
{
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Vector u = {1., 2., 3., 4., 5., 6.};
		try
		{
			display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(u);
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(vector::utils::size(u)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(vector::utils::size(u));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(vector::utils::reshape(u, 3, 2)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(vector::utils::reshape(u, 3, 2));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
	}

	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix u = {{1., 2., 3.},
					{4., 5., 6.}};
		try
		{
			display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(u);
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(matrix::utils::shape(u)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(matrix::utils::shape(u));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(matrix::utils::is_square(u)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(matrix::utils::is_square(u));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(matrix::utils::reshape(u)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(matrix::utils::reshape(u));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
	}
}
