/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:06:26 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/23 18:25:04 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <limits>

template<typename K>
class Vector;

template<typename K>
class Matrix;

#include "./Vector.hpp"
#include "./Matrix.hpp"

#include "./display.hpp"
#include "./utils.hpp"

#define STRINGIFY(x) #x
#define BOX_SIZE 64

#include "../tmps/Vector.tpp"
#include "../tmps/Matrix.tpp"

#include "../tmps/display.tpp"
#include "../tmps/utils.tpp"
