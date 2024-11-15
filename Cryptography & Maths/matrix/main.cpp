/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:49:40 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 17:50:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <initializer_list>
#include "includes/Vector.hpp"
#include "includes/Matrix.hpp"
#include "includes/Utils.hpp"

typedef float T;

int main(void)
{
	{
		Vector<T> u = {2, 3};
		Vector<T> v = {5, 7};
		u += v;
		std::cout << u << std::endl;
	}
	{
		Vector<T> u = {2, 3};
		Vector<T> v = {5, 7};
		u -= v;
		std::cout << u << std::endl;
	}
	{
		Vector<T> u = {2, 3};
		u *= 2;
		std::cout << u << std::endl;
	}
	{
		Matrix<T> u = {{1, 2},
					   {3, 4}};
		Matrix<T> v = {{7, 4},
					   {-2, 2}};
		u = u + v;
		std::cout << u << std::endl;
	}
	{
		Matrix<T> u = {{1, 2},
					   {3, 4}};
		Matrix<T> v = {{7, 4},
					   {-2, 2}};
		u = u - v;
		std::cout << u << std::endl;
	}
	{
		Matrix<T> u = {{1, 2},
					   {3, 4}};
		T scalar = 2;
		Matrix<T> w = scalar * u;
		std::cout << w << std::endl;
	}
	return 0;
}
