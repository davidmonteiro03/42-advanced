/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 09:29:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex14
{
	template <typename K>
	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const K fov = M_PI / 4.;
				const K ratio = 1.;
				const K near = 1.;
				const K far = 50.;

				try
				{
					display::box(STRINGIFY(fov), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(fov);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(ratio), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(ratio);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(near), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(near);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(far), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(far);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(projection(fov, ratio, near, far)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(projection(fov, ratio, near, far));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}
}
