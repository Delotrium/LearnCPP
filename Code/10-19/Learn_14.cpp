#include <iostream>
#include <array>
#include <string>

class Arrays {
public:
	void DayArray(int day_num) {
		using namespace std;
		string day[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" }; //Datatype Array[Array size] - creates an string array of size 7
		if (day_num < 7) { 
			cout << "The day is: " << day[day_num - 1]; //Note that one has been subtraced as element starts at 0
		}
		else {
			cout << "Thats an invalid day!" << endl;
		}

		
	};
};

int main() {
	Arrays run;
	int daynumber;
	std::cout << "Insert day number: ";
	std::cin >> daynumber;
	run.DayArray(daynumber);
	return 0;
}
