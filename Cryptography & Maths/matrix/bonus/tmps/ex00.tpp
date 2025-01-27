/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 16:38:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace ex00
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
					Vector<K> u = {2., 3.};
					const Vector<K> v = {5., 7.};

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
						display::box(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u += v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<K> u = {2., 3.};
					const Vector<K> v = {5., 7.};

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
						display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u -= v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<K> u = {2., 3.};
					K a = 2.;

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
						display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(a);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u *= a);
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
					Matrix<K> u = {{1., 2.},
								   {3., 4.}};
					const Matrix<K> v = {{7., 4.},
										 {-2., 2.}};

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
						display::box(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u += v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Matrix<K> u = {{1., 2.},
								   {3., 4.}};
					const Matrix<K> v = {{7., 4.},
										 {-2., 2.}};

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
						display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u -= v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Matrix<K> u = {{1., 2.},
								   {3., 4.}};
					K a = 2.;

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
						display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(a);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u *= a);
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
					Vector<std::complex<K>> u = {{2., 2.5}, {3., 3.5}};
					const Vector<std::complex<K>> v = {{5., 5.5}, {7., 7.5}};

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
						display::box(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u += v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<std::complex<K>> u = {{2., 2.5}, {3., 3.5}};
					const Vector<std::complex<K>> v = {{5., 5.5}, {7., 7.5}};

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
						display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u -= v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<std::complex<K>> u = {{2., 2.5}, {3., 3.5}};
					std::complex<K> a = {2., 2.5};

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
						display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(a);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u *= a);
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
					Matrix<std::complex<K>> u = {{{1., 1.5}, {2., 2.5}},
												 {{3., 3.5}, {4., 4.5}}};
					const Matrix<std::complex<K>> v = {{{7., 7.5}, {4., 4.5}},
													   {{-2., -2.5}, {2., 2.5}}};

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
						display::box(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u += v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 2", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Matrix<std::complex<K>> u = {{{1., 1.5}, {2., 2.5}},
												 {{3., 3.5}, {4., 4.5}}};
					const Matrix<std::complex<K>> v = {{{7., 7.5}, {4., 4.5}},
													   {{-2., -2.5}, {2., 2.5}}};

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
						display::box(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u -= v);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}
				}

				display::box("test 3", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Matrix<std::complex<K>> u = {{{1., 1.5}, {2., 2.5}},
												 {{3., 3.5}, {4., 4.5}}};
					std::complex<K> a = {2., 2.5};

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
						display::box(STRINGIFY(a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(a);
					}
					catch (const std::exception &e)
					{
						display::error(e);
					}

					try
					{
						display::box(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
						display::value(u *= a);
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
