#include <iostream>

class Calculator {
public:
	const double EULER = 2.718281828459045235;

	double addition(double num1, double num2);

	double subtraction(double num1, double num2);

	double division(double num1, double num2);

	double multiplication(double num1, double num2);

	double default_exponent(double num);

	double custom_exponent(double num, double numExponent);

	double sqrt(double num);

	double ln(double num);

private:
	int babylonian_guess(double num);
};