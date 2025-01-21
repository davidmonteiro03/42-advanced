/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:43:34 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/21 09:23:23 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace display
{
	void box(const std::string &,
			 const char &,
			 const char &,
			 const char &,
			 const char &,
			 const char &,
			 const size_t &,
			 const char &);

	template <typename T>
	void value(const T &);

	template <typename T>
	void vector(const std::vector<T> &);

	void error(const std::string &);
}
