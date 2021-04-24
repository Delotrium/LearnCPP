#include <iostream>

void boolean()
{
	bool pizza_is_good = 1; //The boolean is a binaray statement, that is it has two states (True and False). The number 0 represents false, whereas any other number represents true (including -1)
	bool pizza_is_great = true; //You can also directly state if a boolean is true or false
	bool pizza_is_life = 346245;
	std::cout << "Pizza is good: " << pizza_is_good << std::endl; //This will print the boolean state of "pizza_is_good", This will return a 1, or true
	std::cout << "Pizza is great: "<< pizza_is_great << std::endl; //This will also return a 1, even though the definition is directly written as true as true is the same as the value 1
	std::cout << "Pizza is life: " << pizza_is_life << std::endl; //This will also return true, or numerically 1, as every number except 0 is true
	bool i_am_smart = 0; //Numerically, 0 represents false
	bool i_am_really_smart = false; //This is directly stated as false
	bool i_am_not_smart = -1; //Unlike other languages, -1 is still true as only 0 is represented as false
	std::cout << "\nI am smart: " << i_am_really_smart << std::endl;
	std::cout << "I am really smart: " << i_am_really_smart << std::endl;
	std::cout << "I am not smart: " << i_am_not_smart << std::endl;
}

void boolean_example_find()
{
	bool found = false;
	//some search algorithmm -> if found, found = true   ; this is an example of how a boolean could be utilised
}

void true_or_false()
{
	bool pepsi_is_better_than_coke = true;
	std::cout << "\nPepsi is better than coke: "<< std::boolalpha << pepsi_is_better_than_coke << std::endl; //The boolalpha manipulater (part of the standard namespace) will print/store a boolean as non-numerical (so only stored as true or false, not 1 or 0)
}

int main()
{
	boolean();
	boolean_example_find();
	true_or_false();
	return 0;
}
