/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 11:36:29 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex00
{
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Vector u = {2., 3.};
				const Vector v = {5., 7.};
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
					display::box(STRINGIFY(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
				try
				{
					display::box(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u += v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Vector u = {2., 3.};
				const Vector v = {5., 7.};
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
					display::box(STRINGIFY(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
				try
				{
					display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u -= v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Vector u = {2., 3.};
				auto a = 2.;
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
					display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(a);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
				try
				{
					display::box(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u *= a);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	}
}
