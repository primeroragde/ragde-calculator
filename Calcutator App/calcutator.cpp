class Calcuator {
public:

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

	double exponent(double num) // Assumes that default exponent is x^2
	{
		return num * num;
	}

	double custom_exponent(double num, double numExponent) // maybe convert numExp
	{
		for (int i = 0; i < numExponent; i++) // is this slow method? idk might check this later
		{
			//TODO: Find how decimal point exponent works

		}
	}
};