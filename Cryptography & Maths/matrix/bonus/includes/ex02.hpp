/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:32:18 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/27 16:25:31 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ex02
{
	namespace real
	{
		template <typename K>
		void scalar(void);

		template <typename K>
		void vector(void);

		template <typename K>
		void matrix(void);
	}

	namespace complex
	{
		template <typename K>
		void scalar(void);

		template <typename K>
		void vector(void);

		template <typename K>
		void matrix(void);
	}
}
