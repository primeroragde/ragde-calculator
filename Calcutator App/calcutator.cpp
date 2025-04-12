#include "calculator.h"

double Calculator::addition(double num1, double num2)
{
	return num1 + num2;
};

double Calculator::subtraction(double num1, double num2) {
	return num1 - num2;
};

double Calculator::division(double num1, double num2) {
	return num1 / num2;
}

double Calculator::multiplication(double num1, double num2)
{
	return num1 * num2;
}

double Calculator::default_exponent(double num) // Assumes that default exponent is x^2
{
	return num * num;
}

double Calculator::custom_exponent(double num, double numExponent)
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

// Consider adding custom number for it?
// Using the Babylonian algorithm for this. Maybe there's an better algorithm for this but for now, this will be fine
double Calculator::sqrt(double num)
{
	double inital_number = babylonian_guess(num);
	for (int i = 0; i < 20; i++) // Doing 20 iterations for more accurate number. Overkill is good... maybe
	{
		inital_number = 0.50  * ( inital_number + (num / inital_number) ); //Babylonian alogrithm in action
	}
	return inital_number;
}

double Calculator::ln(double num)
{
	//TODO: Add Taylor Series formula to find log of num. (add function for that?)
	return 0;
}

int Calculator::babylonian_guess(double num)
{
	double i = 1;
	while (true)
	{
		if (default_exponent(i) > num)
		{
			return i;
		}
		i++;
	}
};