/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 18:24:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex03
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
					Vector<K> u = {0., 0.};
					const Vector<K> v = {1., 1.};

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
						display::box(STRINGIFY(u.dot(v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.dot(v));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<K> u = {1., 1.};
					const Vector<K> v = {1., 1.};

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
						display::box(STRINGIFY(u.dot(v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.dot(v));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<K> u = {-1., 6.};
					const Vector<K> v = {3., 2.};

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
						display::box(STRINGIFY(u.dot(v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.dot(v));
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
					Vector<std::complex<K>> u = {{0., 0.5}, {0., 0.5}};
					const Vector<std::complex<K>> v = {{1., 1.5}, {1., 1.5}};

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
						display::box(STRINGIFY(u.dot(v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.dot(v));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<std::complex<K>> u = {{1., 1.5}, {1., 1.5}};
					const Vector<std::complex<K>> v = {{1., 1.5}, {1., 1.5}};

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
						display::box(STRINGIFY(u.dot(v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.dot(v));
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<std::complex<K>> u = {{-1., -0.5}, {6., 6.5}};
					const Vector<std::complex<K>> v = {{3., 3.5}, {2., 2.5}};

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
						display::box(STRINGIFY(u.dot(v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.dot(v));
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
