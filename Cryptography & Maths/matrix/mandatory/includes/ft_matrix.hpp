/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:06:26 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/25 21:28:54 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
#include <complex>

template <typename K>
class Vector;

template <typename K>
class Matrix;

#include "./Vector.hpp"
#include "./Matrix.hpp"

#include "./display.hpp"
#include "./general.hpp"

#include "./utils.hpp"
#include "./ex00.hpp"
#include "./ex01.hpp"
#include "./ex02.hpp"
#include "./ex03.hpp"
#include "./ex04.hpp"
#include "./ex05.hpp"
#include "./ex06.hpp"

#define STRINGIFY(x) #x
#define BOX_SIZE 64

#include "../tmps/Vector.tpp"
#include "../tmps/Matrix.tpp"

#include "../tmps/display.tpp"
#include "../tmps/general.tpp"

#include "../tmps/utils.tpp"
#include "../tmps/ex00.tpp"
#include "../tmps/ex01.tpp"
#include "../tmps/ex02.tpp"
#include "../tmps/ex03.tpp"
#include "../tmps/ex04.tpp"
#include "../tmps/ex05.tpp"
#include "../tmps/ex06.tpp"
