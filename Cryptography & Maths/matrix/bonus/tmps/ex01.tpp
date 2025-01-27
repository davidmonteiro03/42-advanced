/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 18:18:04 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex01
{
	namespace real
	{
		template <typename K>
		void vector(void)
		{
			display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
			{
				display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<K> e1 = {1., 0., 0.};
					const Vector<K> e2 = {0., 1., 0.};
					const Vector<K> e3 = {0., 0., 1.};

					std::vector<Vector<K>> u = {e1, e2, e3};
					std::vector<K> coefs = {10., -2., 0.5};

					try
					{
						display::box(STRINGIFY(e1), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(e1);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(e2), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(e2);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(e3), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(e3);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(u);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(coefs), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(coefs);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(linear_combination(u, coefs)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(linear_combination(u, coefs));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<K> v1 = {1., 2., 3.};
					const Vector<K> v2 = {0., 10., -100.};

					std::vector<Vector<K>> u = {v1, v2};
					std::vector<K> coefs = {10., -2.};

					try
					{
						display::box(STRINGIFY(v1), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(v1);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(v2), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(v2);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(u);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(coefs), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(coefs);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(linear_combination(u, coefs)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(linear_combination(u, coefs));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}
			}
		}
	}

	namespace complex
	{
		template <typename K>
		void vector(void)
		{
			display::box("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
			{
				display::box("test 1", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<std::complex<K>> e1 = {{1., 1.5}, {0., 0.5}, {0., 0.5}};
					const Vector<std::complex<K>> e2 = {{0., 0.5}, {1., 1.5}, {0., 0.5}};
					const Vector<std::complex<K>> e3 = {{0., 0.5}, {0., 0.5}, {1., 1.5}};

					std::vector<Vector<std::complex<K>>> u = {e1, e2, e3};
					std::vector<std::complex<K>> coefs = {{10., 10.5}, {-2., -2.5}, {0.5, 1.}};

					try
					{
						display::box(STRINGIFY(e1), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(e1);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(e2), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(e2);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(e3), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(e3);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(u);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(coefs), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(coefs);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(linear_combination(u, coefs)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(linear_combination(u, coefs));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<std::complex<K>> v1 = {{1., 1.5}, {2., 2.5}, {3., 3.5}};
					const Vector<std::complex<K>> v2 = {{0., 0.5}, {10., 10.5}, {-100., -100.5}};

					std::vector<Vector<std::complex<K>>> u = {v1, v2};
					std::vector<std::complex<K>> coefs = {{10., 10.5}, {-2., -2.5}};

					try
					{
						display::box(STRINGIFY(v1), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(v1);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(v2), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(v2);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(u);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(coefs), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::vector(coefs);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(linear_combination(u, coefs)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(linear_combination(u, coefs));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}
			}
		}
	}
}
