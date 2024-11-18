/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/18 16:39:15 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory/includes/Vector.hpp"
#include "mandatory/includes/Matrix.hpp"
#include "mandatory/includes/Utils.hpp"

static void ex00(void)
{
	std::cout << "===== EX00 =====" << std::endl;
	{
		std::cout << "----- Vectors -----" << std::endl;
		{
			Vector u = {2., 3.}, v = {5., 7.};
			std::cout << u + v << std::endl;
			u += v;
			std::cout << u << std::endl;
		}
		{
			Vector u = {2., 3.}, v = {5., 7.};
			std::cout << u - v << std::endl;
			u -= v;
			std::cout << u << std::endl;
		}
		{
			Vector u = {2., 3.};
			std::cout << u * 2. << std::endl;
			std::cout << 2. * u << std::endl;
			u *= 2.;
			std::cout << u << std::endl;
		}
	}
	{
		std::cout << "----- Matrices -----" << std::endl;
		{
			Matrix u = {{1., 2.},
						{3., 4.}},
				   v = {{7., 4.},
						{-2., 2.}};
			std::cout << u + v << std::endl;
			u += v;
			std::cout << u << std::endl;
		}
		{
			Matrix u = {{1., 2.},
						{3., 4.}},
				   v = {{7., 4.},
						{-2., 2.}};
			std::cout << u - v << std::endl;
			u -= v;
			std::cout << u << std::endl;
		}
		{
			Matrix u = {{1., 2.},
						{3., 4.}},
				   v = {{7., 4.},
						{-2., 2.}};
			std::cout << u * 2. << std::endl;
			std::cout << 2. * u << std::endl;
			u *= 2.;
			std::cout << u << std::endl;
		}
	}
}

static void ex01(void)
{
	std::cout << "===== EX01 =====" << std::endl;
	{
		Vector e1 = {1., 0., 0.};
		Vector e2 = {0., 1., 0.};
		Vector e3 = {0., 0., 1.};
		Vector lc = linear_combination({e1, e2, e3}, {10., -2., 0.5});
		std::cout << lc << std::endl;
	}
	{
		Vector v1 = {1., 2., 3.};
		Vector v2 = {0., 10., -100.};
		Vector lc = linear_combination({v1, v2}, {10., -2.});
		std::cout << lc << std::endl;
	}
}

static void ex02(void)
{
	std::cout << "===== EX02 =====" << std::endl;
	std::cout << lerp({0.}, {1.}, 0.) << std::endl;
	std::cout << lerp({0.}, {1.}, 1.) << std::endl;
	std::cout << lerp({0.}, {1.}, 0.5) << std::endl;
	std::cout << lerp({21.}, {42.}, 0.3) << std::endl;
	std::cout << lerp({{2., 1.},
					   {3., 4.}},
					  {{20., 10.},
					   {30., 40.}},
					  0.5)
			  << std::endl;
}

static void ex03(void)
{
	std::cout << "===== EX03 =====" << std::endl;
	{
		Vector u = {0., 0.};
		Vector v = {1., 1.};
		std::cout << u.dot(v) << std::endl;
	}
	{
		Vector u = {1., 1.};
		Vector v = {1., 1.};
		std::cout << u.dot(v) << std::endl;
	}
	{
		Vector u = {-1., 6.};
		Vector v = {3., 2.};
		std::cout << u.dot(v) << std::endl;
	}
}

static void ex04(void)
{
	std::cout << "===== EX04 =====" << std::endl;
	{
		Vector u = {0., 0., 0.};
		std::cout << u.norm_1() << ", " << u.norm() << ", " << u.norm_inf() << std::endl;
	}
	{
		Vector u = {1., 2., 3.};
		std::cout << u.norm_1() << ", " << u.norm() << ", " << u.norm_inf() << std::endl;
	}
	{
		Vector u = {1., -2.};
		std::cout << u.norm_1() << ", " << u.norm() << ", " << u.norm_inf() << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./matrix <exercise>" << std::endl;
		return 1;
	}
	std::vector<std::string> s_excs = {"ex00", "ex01", "ex02", "ex03", "ex04"};
	std::vector<void (*)(void)> f_excs = {ex00, ex01, ex02, ex03, ex04};
	for (size_t i = 0; i < s_excs.size(); i++)
	{
		if (s_excs[i] == argv[1])
		{
			if (i >= f_excs.size())
			{
				std::cerr << "There no match function for " << argv[1] << '.' << std::endl;
				return 1;
			}
			if (f_excs[i] == nullptr)
			{
				std::cerr << "Match function for " << argv[1] << " is null." << std::endl;
				return 1;
			}
			try
			{
				f_excs[i]();
			}
			catch (const std::exception &e)
			{
				std::cerr << "Something went wrong while executing " << argv[1] << "..." << std::endl;
				return 1;
			}
			return 0;
		}
	}
	std::cerr << "Exercise " << argv[1] << " not found." << std::endl;
	return 0;
}
