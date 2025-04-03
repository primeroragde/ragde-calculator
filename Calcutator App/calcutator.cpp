#include <iostream>

class Calcuator {
public:
	const double EULER = 2.718281828459045235;

	double addition(double num1, double num2)
	{
		return num1 + num2;
	};

	double subtraction(double num1, double num2) {
		return num1 - num2;
	};

	double division(double num1, double num2) {
		return num1 / num2;
	}

	double multiplication(double num1, double num2)
	{
		return num1 * num2;
	}

	double default_exponent(double num) // Assumes that default exponent is x^2
	{
		return num * num;
	}

	double custom_exponent(double num, double numExponent) // maybe convert numExp
	{
		// needs to consider num as decimal as well
		if (std::floor(numExponent) != numExponent) // Checks if custom exponent has decimal point. If no, go else
		{

		}
		else
		{
			double result = num;
			for (int i = 1; i < numExponent; i++)
			{
				result *= num;
			}
			return result;
		}
	}

	//TODO: Add Taylor Series formula to find log of num. (add function for that?)
};