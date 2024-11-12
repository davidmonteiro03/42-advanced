/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:01:28 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:10:18 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Shovel.hpp"

Shovel::Shovel(void) : Tool() {}

Shovel::~Shovel() {}

void Shovel::use(void) { this->_numberOfUses++; }
