/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_product.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:56 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/28 20:43:10 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace dot_product
{
	template <typename V>
	void execute(const std::vector<std::pair<V, V>> &tests)
	{
		for (size_t i = 0; i < tests.size(); i++)
		{
			V u = tests[i].first;
			const V v = tests[i].second;
			std::stringstream testStream;

			testStream << "Test " << i + 1;
			display::box(testStream.str(), '*', '*', '/', '/', ' ', BOX_SIZE, '\n');
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
