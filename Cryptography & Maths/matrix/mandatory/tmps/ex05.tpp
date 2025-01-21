/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 15:40:04 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex05
{
	template <typename R>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {1., 0.};
				const Vector<R> v = {1., 0.};

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
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {1., 0.};
				const Vector<R> v = {0., 1.};

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
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {-1., 1.};
				const Vector<R> v = {1., -1.};

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
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 4", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {2., 1.};
				const Vector<R> v = {4., 2.};

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
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 5", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<R> u = {1., 2., 3.};
				const Vector<R> v = {4., 5., 6.};

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
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
}
