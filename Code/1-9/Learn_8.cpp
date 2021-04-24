#include <iostream>


void const_test()
{
	int x = 5;
	const int y = 5; //the const type will mean that the variable (in this case, y) can not be changed/redefined, y will ALWAYS be 5 in this code, otherwise there will be a compiling error
	const int setting = 3; //An example of const
	#define X 10 //Another, but less used, way of making a const variable
	enum { e = 100};//Also another way of doing this
}

int main()
{
	const_test();
}
