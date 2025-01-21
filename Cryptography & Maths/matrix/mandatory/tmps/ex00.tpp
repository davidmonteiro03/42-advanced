/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 16:25:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex00
{
	template <typename R>
	void vector(void)
	{
		display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Vector<R> u = {2., 3.};
				const Vector<R> v = {5., 7.};

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
					display::box(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u += v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Vector<R> u = {2., 3.};
				const Vector<R> v = {5., 7.};

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
					display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u -= v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Vector<R> u = {2., 3.};
				R a = 2.;

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
					display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(a);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u *= a);
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
				Matrix<R> u = {{1., 2.},
							   {3., 4.}};
				const Matrix<R> v = {{7., 4.},
									 {-2., 2.}};

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
					display::box(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u += v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Matrix<R> u = {{1., 2.},
							   {3., 4.}};
				const Matrix<R> v = {{7., 4.},
									 {-2., 2.}};

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
					display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u -= v);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}

			display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				Matrix<R> u = {{1., 2.},
							   {3., 4.}};
				R a = 2.;

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
					display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(a);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}

				try
				{
					display::box(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u *= a);
				}
				catch (const std::exception &e)
				{
					display::error(e.what());
				}
			}
		}
	}
}
