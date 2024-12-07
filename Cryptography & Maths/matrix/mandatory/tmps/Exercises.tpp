/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exercises.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:56:01 by dcaetano          #+#    #+#             */
/*   Updated: 2024/12/07 09:42:16 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_matrix.hpp"

// display
#define STRINGIFY(expr) #expr
#define PRINT_BOX(expr, top, bottom, left, right, fill, width, last) \
	printBox(expr, top, bottom, left, right, fill, width, last)
#define PRINT_VALUE(expr, top, bottom, left, right, fill, width, last) \
	printValue(#expr, expr, top, bottom, left, right, fill, width, last)
#define PRINT_VECTOR(expr, top, bottom, left, right, fill, width, last) \
	printVector(#expr, expr, top, bottom, left, right, fill, width, last)
#define BOX_SIZE 120
// random
#define INT_RANDOM_MIN 1
#define INT_RANDOM_MAX 10
#define REAL_RANDOM_MIN -10
#define REAL_RANDOM_MAX 10

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
	for (size_t i = 0; i < fillSize / 2; i++)
		std::cout << fill;
	std::cout << str;
	for (size_t i = 0; i < fillSize / 2 + (str.size() % 2 != tmpWidth % 2); i++)
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
V randomVector(const typename V::value_type &start, const typename V::value_type &end)
{
	size_t size = generateInt<size_t>(INT_RANDOM_MIN, INT_RANDOM_MAX);
	V result(size);
	for (size_t i = 0; i < size; i++)
		result[i] = generateReal<typename V::value_type>(start, end);
	return result;
}

template <typename M, typename V = typename M::value_type, typename Enable = valid_real_number<typename V::value_type>>
M randomMatrix(const typename V::value_type &start, const typename V::value_type &end)
{
	size_t size = generateInt<size_t>(INT_RANDOM_MIN, INT_RANDOM_MAX);
	M result(size);
	for (size_t i = 0; i < size; i++)
		result[i] = randomVector<V>(start, end);
	return result;
}

void Exercises::ex00(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Vector<float> u = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
					  v = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		float a = generateReal<float>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(a, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		try
		{
			PRINT_VALUE(u + v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u + v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u - v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u - v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u * a, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u * a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(a * u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(a * u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u += v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u -= v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u *= a, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
	}
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
					  v = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		float a = generateReal<float>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(a, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		try
		{
			PRINT_VALUE(u + v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u + v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u - v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u - v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u * a, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u * a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(a * u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(a * u), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u += v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u += v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u -= v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u -= v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
		try
		{
			PRINT_VALUE(u *= a, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(u *= a), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
	}
}

void Exercises::ex01(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		std::vector<Vector<float>> u = std::vector<Vector<float>>(generateInt<size_t>(INT_RANDOM_MIN, INT_RANDOM_MAX)),
								   v = std::vector<Vector<float>>(generateInt<size_t>(INT_RANDOM_MIN, INT_RANDOM_MAX));
		std::vector<float> coefs = std::vector<float>(generateInt<size_t>(INT_RANDOM_MIN, INT_RANDOM_MAX));
		for (size_t i = 0; i < u.size(); i++)
			u[i] = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		for (size_t i = 0; i < v.size(); i++)
			v[i] = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		for (size_t i = 0; i < coefs.size(); i++)
			coefs[i] = generateReal<float>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VECTOR(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VECTOR(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VECTOR(coefs, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		try
		{
			PRINT_VALUE(linear_combination(u, coefs), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(linear_combination(u, coefs)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
	}
}

void Exercises::ex02(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Real Numbers Set", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		float u = generateReal<float>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
			  v = generateReal<float>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
			  t = generateReal<float>(0, 1);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(t, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		try
		{
			PRINT_VALUE(lerp(u, v, t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
	}
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Vector<float> u = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
					  v = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		float t = generateReal<float>(0, 1);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(t, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		try
		{
			PRINT_VALUE(lerp(u, v, t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
	}
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
					  v = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		float t = generateReal<float>(0, 1);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(t, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		try
		{
			PRINT_VALUE(lerp(u, v, t), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		}
		catch (std::exception &e)
		{
			PRINT_BOX(STRINGIFY(lerp(u, v, t)), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
			std::cerr << "Error: " << e.what() << std::endl
					  << std::endl;
		}
	}
}

void Exercises::ex03(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Vector<float> u = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
					  v = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.dot(v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex04(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Vector<float> u = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.norm_1(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.norm(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.norm_inf(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex05(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Vector<float> u = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
					  v = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(angle_cos(u, v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex06(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Vector<float> u = randomVector<Vector<float>>(REAL_RANDOM_MIN, INT_RANDOM_MAX),
					  v = randomVector<Vector<float>>(REAL_RANDOM_MIN, INT_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(cross_product(u, v), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex07(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Matrix * Vector", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		Vector<float> v = randomVector<Vector<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u * v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
	{
		PRINT_BOX("Matrix * Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX),
					  v = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u * v, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex08(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.trace(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex09(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.transpose(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex10(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.row_echelon(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex11(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.determinant(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex12(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.inverse(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}

void Exercises::ex13(void)
{
	PRINT_BOX(__func__, '#', '#', '#', '#', ' ', BOX_SIZE, '\n');
	{
		PRINT_BOX("Matrix", '=', '=', '|', '|', ' ', BOX_SIZE, '\n');
		Matrix<float> u = randomMatrix<Matrix<float>>(REAL_RANDOM_MIN, REAL_RANDOM_MAX);
		PRINT_VALUE(u, '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
		PRINT_VALUE(u.rank(), '~', '~', '>', '<', ' ', BOX_SIZE, '\n');
	}
}
