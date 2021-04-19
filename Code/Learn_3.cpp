#include <iostream> // Include the library/header to in/out stream (e.i input and output in terminal)
#include <cmath> // Include the C++ math library

void print_pow(double base, double exponent)
{
	std::cout << pow(10, 2) << std::endl; //Print the pow function with arguments of 10 and 2, this function raises 10 to the second power.
	std::cout << "The result of " << base << " ^ " << exponent << " is: " << pow(base, exponent);
}

void pow_input() //This Function will get the user to input the arguments for the pow function
{
	double base, exponent; //Declare the base and the exponent variable
	std::cout << "Insert the base: ";
	std::cin >> base; //Get an input from the user which is stored in the base variable
	std::cout << "Insert the exponent: ";
	std::cin >> exponent;
	print_pow(base, exponent);
}



int main() //The main function
{
	std::cout << pow(10,2) << std::endl; //Print the pow function with arguments of 10 and 2, this function raises 10 to the second power.
	pow_input();
	return 0; //Return code 0

}

