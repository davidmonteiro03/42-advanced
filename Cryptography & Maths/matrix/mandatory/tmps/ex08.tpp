/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 17:23:18 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex08
{
	template <typename R>
	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<R> u = {{1., 0.},
									 {0., 1.}};

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
					display::box(STRINGIFY(u.trace()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.trace());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<R> u = {{2., -5., 0.},
									 {4., 3., 7.},
									 {-2., 3., 4.}};

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
					display::box(STRINGIFY(u.trace()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.trace());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<R> u = {{-2., -8., 4.},
									 {1., -23., 4.},
									 {0., 6., 4.}};

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
					display::box(STRINGIFY(u.trace()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.trace());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
}
