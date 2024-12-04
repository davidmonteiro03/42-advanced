/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exercises.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:56:01 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/04 23:07:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

template<typename R, typename Enable = std::enable_if_t<std::is_integral<R>::value>>
R generateInt(const R &start, const R &end)
{
	R minValue = std::min(start, end);
	R maxValue = std::max(start, end);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<R> dis(minValue, maxValue);
	return dis(gen);
}

template<typename R, typename Enable = valid_real_number<R>>
R generateReal(const R &start, const R &end)
{
	R minValue = std::min(start, end);
	R maxValue = std::max(start, end);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<R> dis(minValue, maxValue);
	return dis(gen);
}

void Exercises::ex00(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX00        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::srand(std::time(nullptr));
	{
		std::cout << "======================" << std::endl;
		std::cout << "=> Vector" << std::endl;
		size_t size = generateInt(1, 5);
		Vector<float> u(size), v(size);
		for (size_t i = 0; i < size; i++)
		{
			u[i] = generateReal(-42., 42.);
			v[i] = generateReal(-42., 42.);
		}
		float a = generateReal(-42., 42.);
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>>>> u <<<<<<<<" << std::endl
				  << u << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>>>> v <<<<<<<<" << std::endl
				  << v << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>>>> a <<<<<<<<" << std::endl
				  << a << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u + v <<<<<<" << std::endl
				  << u + v << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u - v <<<<<<" << std::endl
				  << u - v << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u * a <<<<<<" << std::endl
				  << u * a << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> a * u <<<<<<" << std::endl
				  << a * u << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u += v <<<<<" << std::endl
				  << (u += v) << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u -= v <<<<<" << std::endl
				  << (u -= v) << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u *= a <<<<<" << std::endl
				  << (u *= a) << std::endl;
	}
	{
		std::cout << "======================" << std::endl;
		std::cout << "=> Matrix" << std::endl;
		size_t m = generateInt(1, 5), n = generateInt(1, 5);
		Matrix<float> u, v;
		for (size_t i = 0; i < m; i++)
		{
			Vector<float> rowU(n), rowV(n);
			for (size_t j = 0; j < n; j++)
			{
				rowU[j] = generateReal(-42., 42.);
				rowV[j] = generateReal(-42., 42.);
			}
			u.push_back(rowU);
			v.push_back(rowV);
		}
		float a = generateReal(-42., 42.);
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>>>> u <<<<<<<<" << std::endl
				  << u << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>>>> v <<<<<<<<" << std::endl
				  << v << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>>>> a <<<<<<<<" << std::endl
				  << a << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u + v <<<<<<" << std::endl
				  << u + v << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u - v <<<<<<" << std::endl
				  << u - v << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u * a <<<<<<" << std::endl
				  << u * a << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> a * u <<<<<<" << std::endl
				  << a * u << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u += v <<<<<" << std::endl
				  << (u += v) << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u -= v <<<<<" << std::endl
				  << (u -= v) << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << ">>>>> u *= a <<<<<" << std::endl
				  << (u *= a) << std::endl;
	}
	std::cout << std::endl;
}

void Exercises::ex01(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX01        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex02(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX02        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex03(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX03        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex04(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX04        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex05(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX05        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex06(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX06        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex07(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX07        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex08(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX08        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex09(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX09        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex10(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX10        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex11(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX11        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex12(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX12        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}

void Exercises::ex13(void)
{
	std::cout << "+--------------------+" << std::endl;
	std::cout << "|        EX13        |" << std::endl;
	std::cout << "+--------------------+" << std::endl;
	std::cout << std::endl;
}
