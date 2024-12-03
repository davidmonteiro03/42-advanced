/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:06:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/03 14:15:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus/includes/ft_matrix.hpp"

typedef std::map<std::string, void (*)(void)> t_excs;

static void ex00(void)
{
	std::cout << "===== EX00 =====" << std::endl;
	{
		std::cout << "----- Vectors -----" << std::endl;
		{
			Vector<double> u = {2., 3.}, v = {5., 7.};
			std::cout << u + v << std::endl;
			u += v;
			std::cout << u << std::endl;
		}
		{
			Vector<double> u = {2., 3.}, v = {5., 7.};
			std::cout << u - v << std::endl;
			u -= v;
			std::cout << u << std::endl;
		}
		{
			Vector<double> u = {2., 3.};
			std::cout << u * 2. << std::endl;
			std::cout << 2. * u << std::endl;
			u *= 2.;
			std::cout << u << std::endl;
		}
	}
	{
		std::cout << "----- Matrices -----" << std::endl;
		{
			Matrix<double> u = {{1., 2.},
								{3., 4.}},
						   v = {{7., 4.},
								{-2., 2.}};
			std::cout << u + v << std::endl;
			u += v;
			std::cout << u << std::endl;
		}
		{
			Matrix<double> u = {{1., 2.},
								{3., 4.}},
						   v = {{7., 4.},
								{-2., 2.}};
			std::cout << u - v << std::endl;
			u -= v;
			std::cout << u << std::endl;
		}
		{
			Matrix<double> u = {{1., 2.},
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
		Vector<double> e1 = {1., 0., 0.}, e2 = {0., 1., 0.}, e3 = {0., 0., 1.};
		Vector<double> lc = linear_combination<double>({e1, e2, e3}, {10., -2., 0.5});
		std::cout << lc << std::endl;
	}
	{
		Vector<double> v1 = {1., 2., 3.}, v2 = {0., 10., -100.};
		Vector<double> lc = linear_combination<double>({v1, v2}, {10., -2.});
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
		Vector<double> u = {0., 0.}, v = {1., 1.};
		std::cout << u.dot(v) << std::endl;
	}
	{
		Vector<double> u = {1., 1.}, v = {1., 1.};
		std::cout << u.dot(v) << std::endl;
	}
	{
		Vector<double> u = {-1., 6.}, v = {3., 2.};
		std::cout << u.dot(v) << std::endl;
	}
}

static void ex04(void)
{
	std::cout << "===== EX04 =====" << std::endl;
	{
		Vector<double> u = {0., 0., 0.};
		std::cout << u.norm_1() << ", " << u.norm() << ", " << u.norm_inf() << std::endl;
	}
	{
		Vector<double> u = {1., 2., 3.};
		std::cout << u.norm_1() << ", " << u.norm() << ", " << u.norm_inf() << std::endl;
	}
	{
		Vector<double> u = {1., -2.};
		std::cout << u.norm_1() << ", " << u.norm() << ", " << u.norm_inf() << std::endl;
	}
}

static void ex05(void)
{
	std::cout << "===== EX05 =====" << std::endl;
	{
		Vector<double> u = {1., 0.}, v = {1., 0.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector<double> u = {1., 0.}, v = {0., 1.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector<double> u = {-1., 1.}, v = {1., -1.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector<double> u = {2., 1.}, v = {4., 2.};
		std::cout << angle_cos(u, v) << std::endl;
	}
	{
		Vector<double> u = {1., 2., 3.}, v = {4., 5., 6.};
		std::cout << angle_cos(u, v) << std::endl;
	}
}

static void ex06(void)
{
	std::cout << "===== EX06 =====" << std::endl;
	{
		Vector<double> u = {0., 0., 1.}, v = {1., 0., 0.};
		std::cout << cross_product(u, v) << std::endl;
	}
	{
		Vector<double> u = {1., 2., 3.}, v = {4., 5., 6.};
		std::cout << cross_product(u, v) << std::endl;
	}
	{
		Vector<double> u = {4., 2., -3.}, v = {-2., -5., 16.};
		std::cout << cross_product(u, v) << std::endl;
	}
}

static void ex07(void)
{
	std::cout << "===== EX07 =====" << std::endl;
	{
		Matrix<double> u = {{1., 0.},
							{0., 1.}};
		Vector<double> v = {4., 2.};
		std::cout << u.mul_vec(v) << std::endl;
	}
	{
		Matrix<double> u = {{2., 0.},
							{0., 2.}};
		Vector<double> v = {4., 2.};
		std::cout << u.mul_vec(v) << std::endl;
	}
	{
		Matrix<double> u = {{2., -2.},
							{-2., 2.}};
		Vector<double> v = {4., 2.};
		std::cout << u.mul_vec(v) << std::endl;
	}
	{
		Matrix<double> u = {{1., 0.},
							{0., 1.}},
					   v = {{1., 0.},
							{0., 1.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix<double> u = {{1., 0.},
							{0., 1.}},
					   v = {{2., 1.},
							{4., 2.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix<double> u = {{3., -5.},
							{6., 8.}},
					   v = {{2., 1.},
							{4., 2.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 3.},
							{4., 5., 6.}},
					   v = {{1., 2.},
							{3., 4.},
							{5., 6.}};
		std::cout << u.mul_mat(v) << std::endl;
	}
	{
		Matrix<double> u = {{1., 2.},
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
		Matrix<double> u = {{1., 0.},
							{0., 1.}};
		std::cout << u.trace() << std::endl;
	}
	{
		Matrix<double> u = {{2., -5., 0.},
							{4., 3., 7.},
							{-2., 3., 4.}};
		std::cout << u.trace() << std::endl;
	}
	{
		Matrix<double> u = {{-2., -8., 4.},
							{1., -23., 4.},
							{0., 6., 4.}};
		std::cout << u.trace() << std::endl;
	}
}

static void ex09(void)
{
	std::cout << "===== EX09 =====" << std::endl;
	{
		Matrix<double> u = {{1., 2., 3.},
							{4., 5., 6.}};
		std::cout << u.transpose() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2.},
							{3., 4.},
							{5., 6.}};
		std::cout << u.transpose() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 3.},
							{4., 5., 6.},
							{7., 8., 9.}};
		std::cout << u.transpose() << std::endl;
	}
}

static void ex10(void)
{
	std::cout << "===== EX10 =====" << std::endl;
	{
		Matrix<double> u = {{1., 0., 0.},
							{0., 1., 0.},
							{0., 0., 1.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2.},
							{3., 4.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2.},
							{2., 4.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2., 4., 28.},
							{4., 2.5, 20., 4., -4.},
							{8., 5., 1., 4., 17.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{2., 3., 4.},
							{-7., 4., 2.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., -2., 1., -1.},
							{2., 1., 3., 8.},
							{4., -7., 1., -2.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{-1.3, 0.6},
							{20.4, 5.5},
							{9.7, -6.2}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{4., -7., 5., 0.},
							{-2., 0., 11., 8.},
							{19., 1., -3., 12.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{9., 13., 5.},
							{1., 11., 7.},
							{2., 6., 3.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., 3., 6.},
							{8., 5., 0.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{9., 13., 5., 2.},
							{1., 11., 7., 6.},
							{3., 7., 4., 1.},
							{6., 0., 7., 10.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{-2., -1., 2.},
							{2., 1., 4.},
							{-3., 3., -1.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., -1.},
							{-1., 1.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{2., 0., 0.},
							{0., 2., 0.},
							{0., 0., 2.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2.},
							{4., 7., 20.},
							{7., 6., 1.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2., 4.},
							{4., 2.5, 20., 4.},
							{8., 5., 1., 4.},
							{28., -4., 17., 1.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{2., 5., 3., -3.},
							{4., 0, 8., 0.},
							{1., 3., 0., 2.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 3.},
							{0., 1., 4.},
							{5., 6., 0.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{2., -1., 0.},
							{1., 3., 4.},
							{4., 1., -3.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 1.},
							{-2., -3., 1.},
							{3., 5., 0.},
							{2., 4., 2.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{3., 2., 1.},
							{-6., -4., -2.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 3.},
							{2., 3., 5.},
							{3., 4., 7.},
							{4., 5., 9.}};
		std::cout << u.row_echelon() << std::endl;
	}
	{
		Matrix<double> u = {{2., -1., 3.},
							{1., 0., 1.},
							{0., 2., -1.},
							{1., 1., 4.}};
		std::cout << u.row_echelon() << std::endl;
	}
}

static void ex11(void)
{
	std::cout << "===== EX11 =====" << std::endl;
	{
		Matrix<double> u = {{1., -1.},
							{-1., 1.}};
		std::cout << u.determinant() << std::endl;
	}
	{
		Matrix<double> u = {{2., 0., 0.},
							{0., 2., 0.},
							{0., 0., 2.}};
		std::cout << u.determinant() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2.},
							{4., 7., 20.},
							{7., 6., 1.}};
		std::cout << u.determinant() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2., 4.},
							{4., 2.5, 20., 4.},
							{8., 5., 1., 4.},
							{28., -4., 17., 1.}};
		std::cout << u.determinant() << std::endl;
	}
}

static void ex12(void)
{
	std::cout << "===== EX12 =====" << std::endl;
	{
		Matrix<double> u = {{1., 0., 0.},
							{0., 1., 0.},
							{0., 0., 1.}};
		std::cout << u.inverse() << std::endl;
	}
	{
		Matrix<double> u = {{2., 0., 0.},
							{0., 2., 0.},
							{0., 0., 2.}};
		std::cout << u.inverse() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2.},
							{4., 7., 20.},
							{7., 6., 1.}};
		std::cout << u.inverse() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 3.},
							{0., 1., 4.},
							{5., 6., 0.}};
		std::cout << u.inverse() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2., 4.},
							{4., 2.5, 20., 4.},
							{8., 5., 1., 4.},
							{28., -4., 17., 1.}};
		std::cout << u.inverse() << std::endl;
	}
}

static void ex13(void)
{
	std::cout << "===== EX13 =====" << std::endl;
	{
		Matrix<double> u = {{1., 0., 0.},
							{0., 1., 0.},
							{0., 0., 1.}};
		std::cout << u.rank() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 0., 0.},
							{2., 4., 0., 0.},
							{-1., 2., 1., 1.}};
		std::cout << u.rank() << std::endl;
	}
	{
		Matrix<double> u = {{8., 5., -2.},
							{4., 7., 20.},
							{7., 6., 1.},
							{21., 18., 7.}};
		std::cout << u.rank() << std::endl;
	}
	{
		Matrix<double> u = {{2., -1., 0.},
							{1., 3., 4.},
							{4., 1., -3.}};
		std::cout << u.rank() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 1.},
							{-2., -3., 1.},
							{3., 5., 0.},
							{2., 4., 2.}};
		std::cout << u.rank() << std::endl;
	}
	{
		Matrix<double> u = {{3., 2., 1.},
							{-6., -4., -2.}};
		std::cout << u.rank() << std::endl;
	}
	{
		Matrix<double> u = {{1., 2., 3.},
							{2., 3., 5.},
							{3., 4., 7.},
							{4., 5., 9.}};
		std::cout << u.rank() << std::endl;
	}
	{
		Matrix<double> u = {{2., -1., 3.},
							{1., 0., 1.},
							{0., 2., -1.},
							{1., 1., 4.}};
		std::cout << u.rank() << std::endl;
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
				   {"ex09", ex09},
				   {"ex10", ex10},
				   {"ex11", ex11},
				   {"ex12", ex12},
				   {"ex13", ex13}};
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
