/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 15:32:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex02
{
	template <typename R>
	void realNumbers(void)
	{
		display::box("Real numbers", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				R u = 0.;
				R v = 1.;
				R t = 0.;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				R u = 0.;
				R v = 1.;
				R t = 1.;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				R u = 0.;
				R v = 1.;
				R t = 0.5;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 4", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				R u = 21.;
				R v = 42.;
				R t = 0.3;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}

	template <typename R>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Vector<R> u = {2., 1.};
				Vector<R> v = {4., 2.};
				R t = 0.3;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}

	template <typename R>
	void matrix(void)
	{
		display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Matrix<R> u = {{2., 1.},
							   {3., 4.}};
				Matrix<R> v = {{20., 10.},
							   {30., 40.}};
				R t = 0.5;

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
					display::box(STRINGIFY(t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(t);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(lerp(u, v, t));
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
}
