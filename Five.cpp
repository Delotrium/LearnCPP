#include <string>
#include <iostream>


void EscapeSequences()
{

	using std::cout; //Instead of writing std::cout each time we want to print, we just need to type cout
	using std::endl;
	cout << "Before After" << endl; //Normal Space
	cout << "Before_One\tAfter_One" << endl; //Adds a tab-space at \t
	cout << "Before_Two\nAfter_Two" << endl; //Creates a new line at \n
	cout << "Before_Three\bAfter_Three" << endl; //Backspaces and deletes the character before \b
	cout << "Before_Four\vAfter_Four" << endl; //Adds a vertical tab at the \v (note that some prompts dont support this)
	cout << "Before_Five\aAfter_Five" << endl; //The \a plays a sound on execution
	cout << "Before_Six\0After_Six" << endl; //The \0 Stops the remaining string being placed in memory
	cout << "Before_Seven\"After_Seven" << endl; //Adds a double quote on the \"
	cout << "Before_Eight\\After_Eight" << endl; //Adds a backslash at the \\ escape sequence
}

int main()
{
	EscapeSequences();
	return 0;
}
