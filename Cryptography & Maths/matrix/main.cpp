/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 20:44:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mandatory/includes/ft_matrix.hpp"

using number_t = _Float32x;

template <typename K>
void ex00(void)
{
	display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	display::box("Add vectors", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	add::execute<Vector<K>>({{{0, 0}, {0, 0}},
							 {{1, 0}, {0, 1}},
							 {{1, 1}, {1, 1}},
							 {{21, 21}, {21, 21}},
							 {{-21, 21}, {21, -21}},
							 {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}}});
	display::box("Add matrices", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	add::execute<Matrix<K>>({
		{{{0, 0}, {0, 0}}, {{0, 0}, {0, 0}}},
		{{{1, 0}, {0, 1}}, {{0, 0}, {0, 0}}},
		{{{1, 1}, {1, 1}}, {{1, 1}, {1, 1}}},
		{{{21, 21}, {21, 21}}, {{21, 21}, {21, 21}}},
	});
	display::box("Subtract vectors", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	subtract::execute<Vector<K>>({{{0, 0}, {0, 0}},
								  {{1, 0}, {0, 1}},
								  {{1, 1}, {1, 1}},
								  {{21, 21}, {21, 21}},
								  {{-21, 21}, {21, -21}},
								  {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}}});
	display::box("Subtract matrices", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	subtract::execute<Matrix<K>>({
		{{{0, 0}, {0, 0}}, {{0, 0}, {0, 0}}},
		{{{1, 0}, {0, 1}}, {{0, 0}, {0, 0}}},
		{{{1, 1}, {1, 1}}, {{1, 1}, {1, 1}}},
		{{{21, 21}, {21, 21}}, {{21, 21}, {21, 21}}},
	});
	display::box("Multiply vectors by scalars", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	multiply::execute<Vector<K>, K>({
		{{0, 0}, 1},
		{{1, 0}, 1},
		{{1, 1}, 2},
		{{21, 21}, 2},
		{{42, 42}, 0.5},
	});
	display::box("Multiply matrices by scalars", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	multiply::execute<Matrix<K>, K>({{{{0, 0}, {0, 0}}, 0},
									 {{{1, 0}, {0, 1}}, 1},
									 {{{1, 2}, {3, 4}}, 2},
									 {{{21, 21}, {21, 21}}, 0.5}});
}

template <typename K>
void ex01(void)
{
	display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	display::box("Linear combination", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	lin_comb::execute<K>({{{{-42., 42.}}, {-1.}},
						  {{{-42.}, {-42.}, {-42.}}, {-1., 1., 0.}},
						  {{{-42., 42.}, {1., 3.}, {10., 20.}}, {1., -10., -1.}},
						  {{{-42., 100., -69.5}, {1., 3., 5.}}, {1., -10.}}});
}

template <typename K, typename R>
void ex02(void)
{
	display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	display::box("Scalars linear interpolation", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	lin_inter::execute<K, R>({{{0., 1.}, 0.},
							  {{0., 1.}, 1.},
							  {{0., 42.}, 0.5},
							  {{-42., 42.}, 0.5}});
	display::box("Vectors linear interpolation", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	lin_inter::execute<Vector<K>, R>({{{{-42., 42.}, {42., -42.}}, 0.5}});
}

template <typename K>
void ex03(void)
{
	display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	display::box("Dot product", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
	dot_product::execute<Vector<K>>({{{0, 0}, {0, 0}},
									 {{1, 0}, {0, 0}},
									 {{1, 0}, {1, 0}},
									 {{1, 0}, {0, 1}},
									 {{1, 1}, {1, 1}},
									 {{4, 2}, {2, 1}}});
}

int main(void)
{
	std::cout.precision(std::numeric_limits<number_t>::digits10);
	std::cerr.precision(std::numeric_limits<number_t>::digits10);

	// ex00<number_t>();
	// ex01<number_t>();
	// ex02<number_t, number_t>();
	ex03<number_t>();

	return 0;
}
