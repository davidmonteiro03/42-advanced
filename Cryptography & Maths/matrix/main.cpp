/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:49:40 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/15 11:49:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Vector.hpp"
#include "includes/Matrix.hpp"
#include "includes/Utils.hpp"

int main(void)
{
	try
	{
		Vector<float> vector(16);
		for (size_t i = 0; i < vector.size(); i++)
			vector[i] = i + 1;
		Matrix<float> matrix = Utils::reshape_vector_into_matrix(vector, 4, 4);
		Vector<float> backup = Utils::reshape_matrix_into_vector(matrix);
		std::cout << vector << std::endl;
		std::cout << matrix << std::endl;
		std::cout << backup << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
