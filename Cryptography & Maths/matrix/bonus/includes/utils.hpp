/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:36:36 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 16:17:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace utils
{
	namespace real
	{
		template <typename K>
		void vector(void);

		template <typename K>
		void matrix(void);
	}

	namespace complex
	{
		template <typename K>
		void vector(void);

		template <typename K>
		void matrix(void);
	}
}
