/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/20 16:10:38 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory/includes/Vector.hpp"
#include "mandatory/includes/Matrix.hpp"
#include "mandatory/includes/Utils.hpp"
#include <map>

typedef std::map<std::string, void (*)(void)> t_excs;

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
		Vector e1 = {1., 0., 0.}, e2 = {0., 1., 0.}, e3 = {0., 0., 1.};
		Vector lc = linear_combination({e1, e2, e3}, {10., -2., 0.5});
		std::cout << lc << std::endl;
	}
	{
		Vector v1 = {1., 2., 3.}, v2 = {0., 10., -100.};
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
		Vector u = {0., 0.}, v = {1., 1.};
		std::cout << u.dot(v) << std::endl;
	}
	{
		Vector u = {1., 1.}, v = {1., 1.};
		std::cout << u.dot(v) << std::endl;
	}
	{
		Vector u = {-1., 6.}, v = {3., 2.};
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

static void ex05(void)
{
	std::cout << "===== EX05 =====" << std::endl;
	{
		Vector u = {1., 0.}, v = {1., 0.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector u = {1., 0.}, v = {0., 1.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector u = {-1., 1.}, v = {1., -1.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector u = {2., 1.}, v = {4., 2.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector u = {1., 2., 3.}, v = {4., 5., 6.};
		std::cout << angle_cos(u, v) << std::endl;
	}
}

static void ex06(void)
{
	std::cout << "===== EX06 =====" << std::endl;
	{
		Vector u = {0., 0., 1.}, v = {1., 0., 0.};
		std::cout << cross_product(u, v) << std::endl;
	}
	{
		Vector u = {1., 2., 3.}, v = {4., 5., 6.};
		std::cout << cross_product(u, v) << std::endl;
	}
	{
		Vector u = {4., 2., -3.}, v = {-2., -5., 16.};
		std::cout << cross_product(u, v) << std::endl;
	}
}

static void ex07(void)
{
	std::cout << "===== EX07 =====" << std::endl;
	{
		Matrix u = {{1., 0.},
					{0., 1.}};
		Vector v = {4., 2.};
		std::cout << u.mul_vec(v) << std::endl;
	}
	{
		Matrix u = {{2., 0.},
					{0., 2.}};
		Vector v = {4., 2.};
		std::cout << u.mul_vec(v) << std::endl;
	}
	{
		Matrix u = {{2., -2.},
					{-2., 2.}};
		Vector v = {4., 2.};
		std::cout << u.mul_vec(v) << std::endl;
	}
	{
		Matrix u = {{1., 0.},
					{0., 1.}},
			   v = {{1., 0.},
					{0., 1.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix u = {{1., 0.},
					{0., 1.}},
			   v = {{2., 1.},
					{4., 2.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix u = {{3., -5.},
					{6., 8.}},
			   v = {{2., 1.},
					{4., 2.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix u = {{1., 2., 3.},
					{4., 5., 6.}},
			   v = {{1., 2.},
					{3., 4.},
					{5., 6.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix u = {{1., 2.},
					{3., 4.},
					{5., 6.}},
			   v = {{1., 2., 3.},
					{4., 5., 6.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
}

static void ex08(void)
{
	std::cout << "===== EX08 =====" << std::endl;
	{
		Matrix u = {{1., 0.},
					{0., 1.}};
		std::cout << u.trace() << std::endl;
	}
	{
		Matrix u = {{2., -5., 0.},
					{4., 3., 7.},
					{-2., 3., 4.}};
		std::cout << u.trace() << std::endl;
	}
	{
		Matrix u = {{-2., -8., 4.},
					{1., -23., 4.},
					{0., 6., 4.}};
		std::cout << u.trace() << std::endl;
	}
}

static void ex09(void)
{
	std::cout << "===== EX09 =====" << std::endl;
	{
		Matrix u = {{1., 2., 3.},
					{4., 5., 6.}};
		std::cout << u.transpose() << std::endl;
	}
	{
		Matrix u = {{1., 2.},
					{3., 4.},
					{5., 6.}};
		std::cout << u.transpose() << std::endl;
	}
	{
		Matrix u = {{1., 2., 3.},
					{4., 5., 6.},
					{7., 8., 9.}};
		std::cout << u.transpose() << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./matrix <exercise>" << std::endl;
		return 1;
	}
	t_excs excs = {{"ex00", ex00},
				   {"ex01", ex01},
				   {"ex02", ex02},
				   {"ex03", ex03},
				   {"ex04", ex04},
				   {"ex05", ex05},
				   {"ex06", ex06},
				   {"ex07", ex07},
				   {"ex08", ex08},
				   {"ex09", ex09}};
	t_excs::iterator exec = excs.find(argv[1]);
	if (exec == excs.end())
	{
		std::cerr << "Exercise " << argv[1] << " not found." << std::endl;
		return 1;
	}
	try
	{
		exec->second();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Something went wrong while executing " << argv[1] << "..." << std::endl;
		std::cerr << "Reason: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}
