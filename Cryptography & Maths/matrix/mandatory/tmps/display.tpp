 // .../* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.tpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:28:13 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 08:21:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace display
{
	template <typename T>
	void value(const T &value)
	{
		std::cout << value << std::endl
				  << std::endl;
	}
}
