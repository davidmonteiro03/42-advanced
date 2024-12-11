/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:26:10 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 15:18:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace tests
{
	void utils(void)
	{
		display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
		Vector vec{1., 2., 3., 4., 5., 6.};
		Matrix mat{{7., 8.},
				   {9., 10.},
				   {11., 12.}};
		try
		{
			display::box(STRINGIFY(vec), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(vec);
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(mat), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(mat);
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(vector::size(vec)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(vector::size(vec));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(matrix::shape(mat)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(matrix::shape(mat));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(matrix::is_square(mat)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(matrix::is_square(mat));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(vector::reshape(vec, 3, 2)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(vector::reshape(vec, 3, 2));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
		try
		{
			display::box(STRINGIFY(matrix::reshape(mat)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			display::value(matrix::reshape(mat));
		}
		catch (const std::exception &e)
		{
			display::error(e.what());
		}
	}

	void ex00(void)
	{
		display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
		{
			display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
			Vector u = {2., 3.},
				   v = {5., 7.};
			auto a = 2.;
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
				display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(a);
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
			try
			{
				display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u -= v);
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
			try
			{
				display::box(STRINGIFY(u + v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u + v);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
			try
			{
				display::box(STRINGIFY(u - v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u - v);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
			try
			{
				display::box(STRINGIFY(u * a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u * a);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
			try
			{
				display::box(STRINGIFY(a * u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(a * u);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
		}
		{
			display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
			Matrix u = {{1., 2.},
						{3., 4.}},
				   v = {{7., 4.},
						{-2., 2.}};
			auto a = 2.;
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
				display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(a);
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
			try
			{
				display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u -= v);
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
			try
			{
				display::box(STRINGIFY(u + v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u + v);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
			try
			{
				display::box(STRINGIFY(u - v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u - v);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
			try
			{
				display::box(STRINGIFY(u * a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u * a);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
			try
			{
				display::box(STRINGIFY(a * u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(a * u);
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
		}
	}

	void ex01(void)
	{
		display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
		{
			display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
			Vector e1 = {1., 0., 0.},
				   e2 = {0., 1., 0.},
				   e3 = {0., 0., 1.};
			Vector v1 = {1., 2., 3.},
				   v2 = {0., 10., -100.};
			try
			{
				display::box(STRINGIFY(linear_combination({e1, e2, e3}, {10., -2., 0.5})), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(linear_combination<double>({e1, e2, e3}, {10., -2., 0.5}));
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
			try
			{
				display::box(STRINGIFY(linear_combination({v1, v2}, {10., -2.})), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(linear_combination<double>({v1, v2}, {10., -2.}));
			}
			catch (const std::exception &e)
			{
				display::error(e.what());
			}
		}
	}

	void ex02(void)
	{
		display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
		{
			display::box("Real Numbers Set", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
			{
				auto u = 0., v = 1., t = 0.;
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
			{
				auto u = 0., v = 1., t = 1.;
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
			{
				auto u = 0., v = 1., t = 0.5;
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

	void ex03(void)
	{
		display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
		{
			display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
			Vector u = {0., 0.},
				   v = {1., 1.};
		}
	}

	void custom(void)
	{
		// do whatever you want
	}
}
