#include <iostream>
#include <float.h>

void float_nums()
{
	using std::cout;
	using std::endl;
	cout << "Test one:\n";
	float a;
	double b_digits = 77000; 
	double b_scientific = 7.7E4; //Scientific notation also works
	long double c;
	cout << b_digits << endl;
	cout << b_scientific << endl; //This will print the same thing as b_digits
}

void test_float_nums()
{
	std::cout << "\n\nTest Two:\n";
	float test = 10.0 / 3; 
	test = test * 1000000000000000000000.0;
	std::cout << test << std::endl; //This will return a value with scientific notation
	std::cout << std::fixed << test << std::endl;  //The std::fixed manipulator will NOT store the double in scientific notation
	//As we can see from the above print, the orginial variable actually deviates from 10/3 at low values, this is an issue with using floats
}	//Each datatype has an amount of specific digits that it is "trust worthy" with.

void float_length()
{
	using std::cout;
	using std::endl;
	cout << "\n\nFloat datatype accuracy:\n";
	cout << "The accuracy of a normal float: " << FLT_DIG << " decimal digits." << endl; //The <datatye>_DIG will return the amount of digits which is accurate to the true value
	cout << "The accuracy of a double: " << DBL_DIG << " decimal digits." << endl;
	cout << "The accuracy of a long double: " << LDBL_DIG << " decmial digits." << endl; //Usually the accuracy is to 18 digits, but may vary
}

int main()
{
	float_nums();
	test_float_nums();
	float_length();
	return 0;
}
