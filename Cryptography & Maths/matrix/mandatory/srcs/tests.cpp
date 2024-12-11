/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:37:31 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 17:54:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace tests
{
	namespace
	{
		void utils_vector() {}
	}

	void utils()
	{
		display::box(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
		utils_vector();
	}
}
