/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:43:34 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/12 11:19:55 by dcaetano         ###   ########.fr       */
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

	void error(const std::string &);
}
