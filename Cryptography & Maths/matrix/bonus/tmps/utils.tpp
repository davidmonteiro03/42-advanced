/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:37:31 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 16:20:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace utils
{
	namespace real
	{
		template <typename K>
		void vector(void)
		{
			display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');

			Vector<K> u = {1., 2., 3., 4., 5., 6.};

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
				display::box(STRINGIFY(u.size()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.size());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}

			try
			{
				display::box(STRINGIFY(u.reshape(3, 2)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.reshape(3, 2));
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}
		}

		template <typename K>
		void matrix(void)
		{
			display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');

			Matrix<K> u = {{1., 2., 3.},
						   {4., 5., 6.}};

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
				display::box(STRINGIFY(u.shape()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.shape());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}

			try
			{
				display::box(STRINGIFY(u.isSquare()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.isSquare());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}

			try
			{
				display::box(STRINGIFY(u.reshape()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.reshape());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}
		}
	}

	namespace complex
	{
		template <typename K>
		void vector(void)
		{
			display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');

			Vector<std::complex<K>> u = {{1., 1.5}, {2., 2.5}, {3., 3.5}, {4., 4.5}, {5., 5.5}, {6., 6.5}};

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
				display::box(STRINGIFY(u.size()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.size());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}

			try
			{
				display::box(STRINGIFY(u.reshape(3, 2)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.reshape(3, 2));
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}
		}

		template <typename K>
		void matrix(void)
		{
			display::box("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');

			Matrix<std::complex<K>> u = {{{1., 1.5}, {2., 2.5}, {3., 3.5}},
										 {{4., 4.5}, {5., 5.5}, {6., 6.5}}};

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
				display::box(STRINGIFY(u.shape()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.shape());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}

			try
			{
				display::box(STRINGIFY(u.isSquare()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.isSquare());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}

			try
			{
				display::box(STRINGIFY(u.reshape()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.reshape());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}
		}
	}
}
