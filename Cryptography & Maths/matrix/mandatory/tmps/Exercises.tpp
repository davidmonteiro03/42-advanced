/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exercises.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:56:01 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/05 14:03:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

#define PRINT_BOX(expr, top, bottom, left, right, fill, width, last) \
	printBox(expr, top, bottom, left, right, fill, width, last)
#define PRINT_VALUE(expr, top, bottom, left, right, fill, width, last) \
	printValue(#expr, expr, top, bottom, left, right, fill, width, last)
#define PRINT_VECTOR(expr, top, bottom, left, right, fill, width, last) \
	printVector(#expr, expr, top, bottom, left, right, fill, width, last)

void printBox(const std::string &str,
			  const char &top,
			  const char &bottom,
			  const char &left,
			  const char &right,
			  const char &fill,
			  const size_t &width,
			  const char &last)
{
	size_t tmpWidth = width;
	if (str.size() + 4 > tmpWidth)
		tmpWidth = str.size() + 4;
	for (size_t i = 0; i < tmpWidth; i++)
		std::cout << top;
	std::cout << std::endl;
	size_t fillSize = tmpWidth - str.size() - 2;
	std::cout << left;
	for (size_t i = 0; i < fillSize / 2 + (str.size() % 2 != tmpWidth % 2); i++)
		std::cout << fill;
	std::cout << str;
	for (size_t i = 0; i < fillSize / 2; i++)
		std::cout << fill;
	std::cout << right << std::endl;
	for (size_t i = 0; i < tmpWidth; i++)
		std::cout << bottom;
	std::cout << std::endl
			  << last;
}

template <typename T>
void printValue(const char *expr,
				const T &value,
				const char &top,
				const char &bottom,
				const char &left,
				const char &right,
				const char &fill,
				const size_t &width,
				const char &last)
{
	PRINT_BOX(expr, top, bottom, left, right, fill, width, last);
	std::cout << value << std::endl
			  << last;
}

template <typename V>
void printVector(const char *expr,
				 const V &vector,
				 const char &top,
				 const char &bottom,
				 const char &left,
				 const char &right,
				 const char &fill,
				 const size_t &width,
				 const char &last)
{
	PRINT_BOX(expr, top, bottom, left, right, fill, width, last);
	for (size_t i = 0; i < vector.size(); i++)
		std::cout << expr << "[" << i << "] = " << vector[i] << std::endl;
	std::cout << last;
}

template <typename R, typename Enable = std::enable_if_t<std::is_integral<R>::value>>
R generateInt(const R &start, const R &end)
{
	std::srand(std::time(nullptr));
	R minValue = std::min(start, end), maxValue = std::max(start, end);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<R> dis(minValue, maxValue);
	return dis(gen);
}

template <typename R, typename Enable = valid_real_number<R>>
R generateReal(const R &start, const R &end)
{
	std::srand(std::time(nullptr));
	R minValue = std::min(start, end), maxValue = std::max(start, end);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<R> dis(minValue, maxValue);
	return dis(gen);
}

template <typename V, typename Enable = valid_real_number<typename V::value_type>>
V randomVector(const size_t &size, const typename V::value_type &start, const typename V::value_type &end)
{
	V result(size);
	for (size_t i = 0; i < size; i++)
		result[i] = generateReal<typename V::value_type>(start, end);
	return result;
}

template <typename M, typename V = typename M::value_type, typename Enable = valid_real_number<typename V::value_type>>
M randomMatrix(const size_t &m, const size_t &n, const typename V::value_type &start, const typename V::value_type &end)
{
	M result(m);
	for (size_t i = 0; i < m; i++)
		result[i] = randomVector<V>(n, start, end);
	return result;
}

void Exercises::ex00(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t size = generateInt<size_t>(1, 10);
		Vector<float> u = randomVector<Vector<float>>(size, -42, 42),
					  v = randomVector<Vector<float>>(size, -42, 42);
		float a = generateReal<float>(-42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(a, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u + v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u - v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u * a, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(a * u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u += v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u -= v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u *= a, '~', '~', '>', '<', ' ', 42, '\n');
	}
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', 42, '\n');
		size_t m = generateInt<size_t>(1, 10), n = generateInt<size_t>(1, 10);
		Matrix<float> u = randomMatrix<Matrix<float>>(m, n, -42, 42),
					  v = randomMatrix<Matrix<float>>(m, n, -42, 42);
		float a = generateReal<float>(-42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(a, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u + v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u - v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u * a, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(a * u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u += v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u -= v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u *= a, '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex01(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t mainSize = generateInt<size_t>(1, 10),
			   elemSize = generateInt<size_t>(1, 10);
		std::vector<Vector<float>> u(mainSize), v(mainSize);
		std::vector<float> coefs(mainSize);
		for (size_t i = 0; i < mainSize; i++)
		{
			u[i] = randomVector<Vector<float>>(elemSize, -42, 42);
			v[i] = randomVector<Vector<float>>(elemSize, -42, 42);
			coefs[i] = generateReal<float>(-42, 42);
		}
		PRINT_VECTOR(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VECTOR(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VECTOR(coefs, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(linear_combination(u, coefs), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex02(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Real Numbers Set", '=', '=', '|', '|', ' ', 42, '\n');
		float u = generateReal<float>(-42, 42),
			  v = generateReal<float>(-42, 42),
			  t = generateReal<float>(0, 1);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(t, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(lerp(u, v, t), '~', '~', '>', '<', ' ', 42, '\n');
	}
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t size = generateInt<size_t>(1, 10);
		Vector<float> u = randomVector<Vector<float>>(size, -42, 42),
					  v = randomVector<Vector<float>>(size, -42, 42);
		float t = generateReal<float>(0, 1);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(t, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(lerp(u, v, t), '~', '~', '>', '<', ' ', 42, '\n');
	}
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', 42, '\n');
		size_t m = generateInt<size_t>(1, 10), n = generateInt<size_t>(1, 10);
		Matrix<float> u = randomMatrix<Matrix<float>>(m, n, -42, 42),
					  v = randomMatrix<Matrix<float>>(m, n, -42, 42);
		float t = generateReal<float>(0, 1);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(t, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(lerp(u, v, t), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex03(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t size = generateInt<size_t>(1, 10);
		Vector<float> u = randomVector<Vector<float>>(size, -42, 42),
					  v = randomVector<Vector<float>>(size, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u.dot(v), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex04(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t size = generateInt<size_t>(1, 10);
		Vector<float> u = randomVector<Vector<float>>(size, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u.norm_1(), '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u.norm(), '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u.norm_inf(), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex05(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t size = generateInt<size_t>(1, 10);
		Vector<float> u = randomVector<Vector<float>>(size, -42, 42),
					  v = randomVector<Vector<float>>(size, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(angle_cos(u, v), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex06(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t size = generateInt<size_t>(1, 3);
		Vector<float> u = randomVector<Vector<float>>(size, -42, 42),
					  v = randomVector<Vector<float>>(size, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(cross_product(u, v), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex07(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Matrix * Vector", '=', '=', '|', '|', ' ', 42, '\n');
		size_t m = generateInt<size_t>(1, 10), n = generateInt<size_t>(1, 10);
		Matrix<float> u = randomMatrix<Matrix<float>>(m, n, -42, 42);
		Vector<float> v = randomVector<Vector<float>>(n, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u * v, '~', '~', '>', '<', ' ', 42, '\n');
	}
	{
		PRINT_BOX("Matrix * Matrix", '=', '=', '|', '|', ' ', 42, '\n');
		size_t m = generateInt<size_t>(1, 10), n = generateInt<size_t>(1, 10);
		Matrix<float> u = randomMatrix<Matrix<float>>(m, n, -42, 42),
					  v = randomMatrix<Matrix<float>>(n, m, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u * v, '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex08(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', 42, '\n');
		size_t m = generateInt<size_t>(1, 10);
		Matrix<float> u = randomMatrix<Matrix<float>>(m, m, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u.trace(), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex09(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', 42, '\n');
		size_t m = generateInt<size_t>(1, 10), n = generateInt<size_t>(1, 10);
		Matrix<float> u = randomMatrix<Matrix<float>>(m, n, -42, 42),
					  v = randomMatrix<Matrix<float>>(n, m, -42, 42);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', 42, '\n');
		PRINT_VALUE(u.transpose(), '~', '~', '>', '<', ' ', 42, '\n');
	}
}

void Exercises::ex10(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
}

void Exercises::ex11(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
}

void Exercises::ex12(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
}

void Exercises::ex13(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', 42, '\n');
}
