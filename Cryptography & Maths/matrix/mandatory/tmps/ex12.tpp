/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 13:37:40 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex12
{
	template <typename K>
	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{1., 0., 0.},
									 {0., 1., 0.},
									 {0., 0., 1.}};

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
					display::box(STRINGIFY(u.inverse()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.inverse());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{2., 0., 0.},
									 {0., 2., 0.},
									 {0., 0., 2.}};

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
					display::box(STRINGIFY(u.inverse()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.inverse());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{8., 5., -2.},
									 {4., 7., 20.},
									 {7., 6., 1.}};

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
					display::box(STRINGIFY(u.inverse()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.inverse());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}
}
