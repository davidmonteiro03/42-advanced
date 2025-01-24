/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:45:34 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 09:15:44 by dcaetano         ###   ########.fr       */
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

	template <typename A, typename B>
	std::ostream &operator<<(std::ostream &, const std::pair<A, B> &);

	void error(const std::exception &);
}
