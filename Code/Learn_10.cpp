#include <iostream>
#include <string>

void strings()
{
	using std::cout;
	using std::endl;
	std::string greeting = "hello";
	cout << greeting[0] << endl; //This will return the 0th element, or letter in this case, which is "h" (remember computers count from 0, not 1)
	cout << greeting + " There!" << endl; //You can can add/concatonate strings 
	greeting += " There!"; //You can append to strings
	cout << greeting.length() << endl; //Appending .length() to a string will return the amount of characters in the string
}

int main()
{
	strings();
}
