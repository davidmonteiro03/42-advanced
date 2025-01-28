/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 13:37:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex07
{
	template <typename K>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{1., 0.},
									 {0., 1.}};
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
					display::box(STRINGIFY(u * v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u * v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{2., 0.},
									 {0., 2.}};
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
					display::box(STRINGIFY(u * v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u * v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{2., -2.},
									 {-2., 2.}};
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
					display::box(STRINGIFY(u * v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u * v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}

	template <typename K>
	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{1., 0.},
									 {0., 1.}};
				const Matrix<K> v = {{1., 0.},
									 {0., 1.}};

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
					display::box(STRINGIFY(u * v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u * v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{1., 0.},
									 {0., 1.}};
				const Matrix<K> v = {{2., 1.},
									 {4., 2.}};

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
					display::box(STRINGIFY(u * v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u * v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{3., -5.},
									 {6., 8.}};
				const Matrix<K> v = {{2., 1.},
									 {4., 2.}};

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
					display::box(STRINGIFY(u * v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u * v);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}
}
