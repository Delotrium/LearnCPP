//All math functions found at: https://en.cppreference.com/w/cpp/numeric/math

#include <iostream>
#include <cmath>

void math_func()
{
	using std::cout;
	using std::endl;
	cout << "Sqrt 25= " << sqrt(25) << endl;//This will return 5
	cout << "Sqrt -25= " << sqrt(-25) << endl;//This will return NaN, standing for "Not a number". Imaginary numbers are also represents as NaN
	cout << "9^9999= " << pow(9, 9999) << endl;//This will return as inf, short hand for infinity, trivially large numbers are respented this way
	cout << "-9^9999= " << pow(-9, 9999) << endl;//This will return as -inf, short hand for negative infinity, trivially large negative numbers are respented this way
	cout << "10/3 has a remainder of: " << remainder(10, 3) << endl;//The remainder will return what is remaining after the devision of the numbers, similar (not the same) to modulus
	cout << "10%3= " << 10 % 3 << endl;//Is like the reminder function, except modulus will always be an integer
	cout << "The highest number out of 10 and 3 is: " << fmax(10, 3) << endl;//Will return the arguement with the highest value
	cout << "The lowest number out of 10 and 3 is: " << fmin(10, 3) << endl;
	cout << "The ceiling of 3.25 is: " << ceil(3.25) << endl;//Rounds up the decimal
	cout << "The floor of 3.25 is: " << floor(3.25) << endl;//Will always round down
	cout << "-3.2 Truncated is: " << trunc(-3.2) << endl; //Trunc will remove decimal values
	cout << "2.5 rounded is: " << round(2.5) << endl; //Will round the value
}

void math_consts()
{
	using std::cout;
	using std::endl;
	cout << "\n\n";
	cout << -INFINITY << endl; //-Infinity, infinity and NaN are also used as constants, (-)infinity will return (-)inf, and NAN will return NaN
	cout << INFINITY << endl;
	cout << NAN << endl;
}

int main()
{
	math_func();
	math_consts();
	return 0;
}
