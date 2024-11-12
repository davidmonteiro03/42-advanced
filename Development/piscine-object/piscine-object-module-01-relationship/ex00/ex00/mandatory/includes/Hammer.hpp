/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:55:07 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:11:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAMMER_HPP
#define HAMMER_HPP

#include "Tool.hpp"

class Hammer : public Tool
{
public:
	Hammer(void);
	~Hammer();
	void use(void);
};

#endif // !HAMMER_HPP
