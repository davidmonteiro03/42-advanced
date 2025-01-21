/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 15:06:51 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex04
{
	template <typename R>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {0., 0., 0.};

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
					display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm_1());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm_inf());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {1., 2., 3.};

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
					display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm_1());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm_inf());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {-1., -2.};

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
					display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm_1());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.norm_inf());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
}
