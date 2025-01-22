/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 19:20:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex10
{
	template <typename R>
	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<R> u = {{1., 0., 0.},
									 {0., 1., 0.},
									 {0., 0., 1.}};

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
					display::box(STRINGIFY(u.row_echelon()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.row_echelon());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<R> u = {{1., 2.},
									 {3., 4.}};

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
					display::box(STRINGIFY(u.row_echelon()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.row_echelon());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<R> u = {{1., 2.},
									 {2., 4.}};

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
					display::box(STRINGIFY(u.row_echelon()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.row_echelon());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 4", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<R> u = {{8., 5., -2., 4., 28.},
									 {4., 2.5, 20., 4., -4.},
									 {8., 5., 1., 4., 17.}};

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
					display::box(STRINGIFY(u.row_echelon()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.row_echelon());
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
}
