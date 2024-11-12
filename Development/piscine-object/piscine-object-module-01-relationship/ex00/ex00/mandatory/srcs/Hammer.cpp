/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:01:28 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:11:22 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Hammer.hpp"

Hammer::Hammer(void) : Tool() {}

Hammer::~Hammer() {}

void Hammer::use(void) { this->_numberOfUses++; }
