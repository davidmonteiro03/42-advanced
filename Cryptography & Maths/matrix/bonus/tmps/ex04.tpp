/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 18:26:27 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex04
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
					const Vector<K> u = {0., 0., 0.};

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
						display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_1());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_inf());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<K> u = {1., 2., 3.};

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
						display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_1());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_inf());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<K> u = {-1., -2.};

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
						display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_1());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_inf());
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
					const Vector<std::complex<K>> u = {{0., 0.5}, {0., 0.5}, {0., 0.5}};

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
						display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_1());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_inf());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<std::complex<K>> u = {{1., 1.5}, {2., 2.5}, {3., 3.5}};

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
						display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_1());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_inf());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					const Vector<std::complex<K>> u = {{-1., -1.5}, {-2., -2.5}};

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
						display::box(STRINGIFY(u.norm_1()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_1());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm());
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u.norm_inf()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u.norm_inf());
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
