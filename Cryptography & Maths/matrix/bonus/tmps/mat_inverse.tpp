/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_inverse.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:04:22 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/29 09:48:41 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace mat_inverse
{
	template <typename K>
	void execute(const std::vector<Matrix<K>> &tests)
	{
		for (size_t i = 0; i < tests.size(); i++)
		{
			const Matrix<K> u = tests[i];
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
				display::box(STRINGIFY(u.inverse()), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
				display::value(u.inverse());
			}
			catch (const std::exception &e)
			{
				display::error(e);
			}
		}
	}
}
