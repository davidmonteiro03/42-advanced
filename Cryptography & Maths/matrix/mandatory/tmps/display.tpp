/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.tpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:28:13 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/11 12:06:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

namespace display
{
	void box(const std::string &str,
			 const char &top,
			 const char &bottom,
			 const char &left,
			 const char &right,
			 const char &fill,
			 const size_t &width,
			 const char &last)
	{
		size_t tmpWidth = width;
		if (str.size() + 4 > tmpWidth)
			tmpWidth = str.size() + 4;
		for (size_t i = 0; i < tmpWidth; i++)
			std::cout << top;
		std::cout << std::endl;
		size_t fillSize = tmpWidth - str.size() - 2;
		std::cout << left;
		for (size_t i = 0; i < fillSize / 2; i++)
			std::cout << fill;
		std::cout << str;
		for (size_t i = 0; i < fillSize / 2 + (str.size() % 2 != tmpWidth % 2); i++)
			std::cout << fill;
		std::cout << right << std::endl;
		for (size_t i = 0; i < tmpWidth; i++)
			std::cout << bottom;
		std::cout << std::endl
				  << last;
	}

	template <typename T>
	void value(const T &value)
	{
		std::cerr << value << std::endl
				  << std::endl;
	}

	void error(const std::string &reason)
	{
		std::cerr << "Error: " << reason << std::endl
				  << std::endl;
	}
}
