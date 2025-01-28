/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:18 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 13:36:53 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ex02
{
	template <typename K>
	void scalar(void)
	{
		display::box("Scalar", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const K u = 0.;
				const K v = 1.;
				const K t = 0.;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const K u = 0.;
				const K v = 1.;
				const K t = 1.;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const K u = 0.;
				const K v = 1.;
				const K t = 0.5;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("test 4", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const K u = 21.;
				const K v = 42.;
				const K t = 0.3;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}

	template <typename K>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {2., 1.};
				const Vector<K> v = {4., 2.};
				const K t = 0.3;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
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
				const Matrix<K> u = {{2., 1.},
									 {3., 4.}};
				const Matrix<K> v = {{20., 10.},
									 {30., 40.}};
				const K t = 0.5;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}
}
