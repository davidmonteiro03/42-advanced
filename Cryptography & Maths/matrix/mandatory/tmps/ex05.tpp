/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 13:37:10 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex05
{
	template <typename K>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {1., 0.};
				const Vector<K> v = {1., 0.};

				try
				{
					display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {1., 0.};
				const Vector<K> v = {0., 1.};

				try
				{
					display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {-1., 1.};
				const Vector<K> v = {1., -1.};

				try
				{
					display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 4", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {2., 1.};
				const Vector<K> v = {4., 2.};

				try
				{
					display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 5", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {1., 2., 3.};
				const Vector<K> v = {4., 5., 6.};

				try
				{
					display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}
}
