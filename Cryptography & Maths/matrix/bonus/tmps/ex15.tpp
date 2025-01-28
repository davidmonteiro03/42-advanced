/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:48:51 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 13:52:00 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ex15
{
	template <typename K>
	void complex(void)
	{
		display::box("Utils", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {{1., 2.}, {3., 4.}, {5., 6.}, {7., 8.}};

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
					display::box(STRINGIFY(u.reshape(2, 2)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.reshape(2, 2));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}

			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{1., 2.}, {3., 4.}},
									 {{5., 6.}, {7., 8.}}};

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

		display::box("EX00", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				display::box("add", '>', '<', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<K> u = {{1., 2.}, {3., 4.}, {5., 6.}};
					const Vector<K> v = {{2., 1.}, {4., 3.}, {6., 5.}};

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

				display::box("subtract", '>', '<', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<K> u = {{1., 2.}, {3., 4.}, {5., 6.}};
					const Vector<K> v = {{2., 1.}, {4., 3.}, {6., 5.}};

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

				display::box("scale", '>', '<', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Vector<K> u = {{1., 2.}, {3., 4.}, {5., 6.}};
					const K a = {2., 1.};

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

			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				display::box("add", '>', '<', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Matrix<K> u = {{{1., 2.}, {3., 4.}},
								   {{5., 6.}, {7., 8.}}};
					const Matrix<K> v = {{{2., 1.}, {4., 3.}},
										 {{6., 5.}, {8., 7.}}};

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

				display::box("subtract", '>', '<', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Matrix<K> u = {{{1., 2.}, {3., 4.}},
								   {{5., 6.}, {7., 8.}}};
					const Matrix<K> v = {{{2., 1.}, {4., 3.}},
										 {{6., 5.}, {8., 7.}}};

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

				display::box("scale", '>', '<', '/', '/', ' ', BOX_SIZE, '\n');
				{
					Matrix<K> u = {{{1., 2.}, {3., 4.}},
								   {{5., 6.}, {7., 8.}}};
					const K a = {2., 1.};

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

		display::box("EX01", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> e1 = {{1., 2.}, {3., 4.}, {5., 6.}};
				const Vector<K> e2 = {{2., 1.}, {4., 3.}, {6., 5.}};
				const Vector<K> e3 = {{3., 4.}, {1., 2.}, {5., 6.}};

				std::vector<Vector<K>> u = {e1, e2, e3};
				std::vector<K> coefs = {{1., 2.}, {3., 4.}, {5., 6}};

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
		}

		display::box("EX02", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("scalar", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const K u = {1., 2.};
				const K v = {3., 4.};
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

			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {{1., 2.}, {3., 4.}};
				const Vector<K> v = {{5., 6.}, {7., 8.}};
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

			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{1., 2.}, {3., 4.}},
									 {{5., 6.}, {7., 8.}}};
				const Matrix<K> v = {{{2., 1.}, {4., 3.}},
									 {{6., 5.}, {8., 7.}}};
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

		display::box("EX03", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {{1., 2.}, {3., 4.}};
				const Vector<K> v = {{5., 6.}, {7., 8.}};

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

		display::box("EX04", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {{1., 2.}, {3., 4.}};

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

		display::box("EX05", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {{1., 2.}, {3., 4.}};
				const Vector<K> v = {{5., 6.}, {7., 8.}};

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
					display::box(STRINGIFY(angle_cos(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(angle_cos(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}

		display::box("EX06", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Vector<K> u = {{1., 2.}, {3., 4.}, {5., 6.}};
				const Vector<K> v = {{2., 1.}, {4., 3.}, {6., 5.}};

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
					display::box(STRINGIFY(cross_product(u, v)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(cross_product(u, v));
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}

		display::box("EX07", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("vector", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{1., 2.}, {3., 4.}},
									 {{5., 6.}, {7., 8.}},
									 {{9., 10.}, {11., 12.}}};
				const Vector<K> v = {{1., 2.}, {3., 4.}};

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

			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{1., 2.}, {3., 4.}},
									 {{5., 6.}, {7., 8.}},
									 {{9., 10.}, {11., 12.}}};
				const Matrix<K> v = {{{1., 2.}, {3., 4.}, {5., 6.}},
									 {{7., 8.}, {9., 10.}, {11., 12.}}};

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

		display::box("EX08", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{1., 2.}, {3., 4.}},
									 {{5., 6.}, {7., 8.}}};

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
					display::box(STRINGIFY(u.trace()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.trace());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}

		display::box("EX09", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{1., 2.}, {3., 4.}},
									 {{5., 6.}, {7., 8.}},
									 {{9., 10.}, {11., 12.}}};

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
					display::box(STRINGIFY(u.transpose()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.transpose());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}

		display::box("EX10", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{2., 1.}, {3., 4.}, {6., 5.}, {7., 8.}},
									 {{10., 9.}, {11., 12.}, {14., 13.}, {15., 16.}},
									 {{26., 25.}, {27., 28.}, {30., 29.}, {31., 32.}},
									 {{18., 17.}, {19., 20.}, {22., 21.}, {23., 24.}}};

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
					display::box(STRINGIFY(u.row_echelon()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.row_echelon());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}

		display::box("EX11", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{2., 1.}, {3., 4.}, {5., 6.}},
									 {{7., 8.}, {9., 10.}, {11., 12.}},
									 {{13., 14.}, {15., 16.}, {17., 18.}}};

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
					display::box(STRINGIFY(u.determinant()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.determinant());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}

		display::box("EX12", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{2., 1.}, {3., 4.}, {5., 6.}},
									 {{7., 8.}, {9., 10.}, {11., 12.}},
									 {{13., 14.}, {15., 16.}, {17., 18.}}};

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
					display::box(STRINGIFY(u.inverse()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.inverse());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}

		display::box("EX13", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		{
			display::box("matrix", '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
			{
				const Matrix<K> u = {{{2., 1.}, {3., 4.}, {5., 6.}},
									 {{7., 8.}, {9., 10.}, {11., 12.}},
									 {{13., 14.}, {15., 16.}, {17., 18.}}};

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
					display::box(STRINGIFY(u.rank()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
					display::value(u.rank());
				}
				catch (const std::exception &e)
				{
					display::error(e);
				}
			}
		}
	}
}
