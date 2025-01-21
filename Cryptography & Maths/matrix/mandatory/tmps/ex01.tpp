/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 14:27:57 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex01
{
	template <typename R>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> e1 = {1., 0., 0.};
				const Vector<R> e2 = {0., 1., 0.};
				const Vector<R> e3 = {0., 0., 1.};

				std::vector<Vector<R>> u = {e1, e2, e3};
				std::vector<R> coefs = {10., -2., 0.5};

				try
				{
					display::box(STRINGIFY(e1), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(e1);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(e2), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(e2);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(e3), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(e3);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::vector(u);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(coefs), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::vector(coefs);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(linear_combination(u, coefs)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(linear_combination(u, coefs));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> v1 = {1., 2., 3.};
				const Vector<R> v2 = {0., 10., -100.};

				std::vector<Vector<R>> u = {v1, v2};
				std::vector<R> coefs = {10., -2.};

				try
				{
					display::box(STRINGIFY(v1), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v1);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(v2), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v2);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::vector(u);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(coefs), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::vector(coefs);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(linear_combination(u, coefs)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(linear_combination(u, coefs));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
}
