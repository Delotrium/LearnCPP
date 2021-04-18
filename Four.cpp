//Imports
#include <string>
#include <climits>
#include <iostream>

//Data Types

int integer = 5; //an int(eger) limits the definition to whole numbers only
bool trueorfalse = true; //a bool(ean) is a binary data type, in most cases it would be true/false
char letter = 'B'; //a char(acter) is a datatype to store letter characters
char ascii = 65; //char datatypes can also be represented by ASCII codes
float decimals = 1 / 2; //float(ing point) datatypes allow the capability to store fractional and decimal numbers
int someNumbers[3] = { 1, 2, 3 }; //an array stores multiple values in a single variable
std::string letters = "hello";  //Strings are sequences of characters

// int datatypes

void integers()
{
	std::cout << "Integers: " << std::endl;
	int a = 16; //int is atleast 16 bits, but is usually 32 bits on most OS's
	short b = 8; //short is atleast 8 bits
	long c = 32; //long is atleast 32 bits
	long long d = 64; //long long is atleast 64 bits
	//The inequality of these datatypes are: short <= int <= long <= long long
	unsigned int e; //Unsigned datatypes allow only positive values, doubling the max number of bits
	unsigned short f;
	unsigned long g;
	unsigned long long h;
	std::cout << sizeof(int) << std::endl;  //The sizeof() function outputs the amount of memory/bytes (a byte is 8 bits) a datatype occupies
	std::cout << SHRT_MAX << std::endl; //Shows the highest number a short datatype can be
	std::cout << USHRT_MAX << std::endl; //Shows the highest number an unsigned short datatype can be
	std::cout << SHRT_MIN << std::endl; //Shows the smallest number a short datatype can be
	std::cout << LONG_MIN << std::endl; //Shows the minimum amount a long datatype can be
}

// char datatpyes

void characters()
{
	std::cout << "Characters: " << std::endl;
	char a = 'A'; //Char stores the single character
	char b = 65; //This is the same as above, as the ASCII dec code for "A" is 65
	std::cout << (int) b << std::endl; //Casting the variable gives the literal number (in this case 65) instead of the corresponding ASCII code
	std::cout << b << std::endl; //This will convert the number to the corresponding ASCII
}

// main function

int main()
{
	characters();
	integers();
	return 0;
}