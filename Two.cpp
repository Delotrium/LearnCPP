#include <iostream> // Include the library/header to in/out stream (e.i input and output in terminal)
#include <cmath> // Include the C++ math library

int pow_input(); //Declare the pow_input function

int main() //The main function
{
	std::cout << pow(10,2) << std::endl; //Print the pow function with arguments of 10 and 2, this function raises 10 to the second power.
	std::cout << "The result is: " << pow_input();
	return 0; //Return code 0

}

int pow_input() //This Function will get the user to input the arguments for the pow function
{
	int base, exponent; //Declare the base and the exponent variable
	std::cout << "Insert the base: ";
	std::cin >> base; //Get an input from the user which is stored in the base variable
	std::cout << "Insert the exponent: ";
	std::cin >> exponent;
	return pow(base, exponent);
}