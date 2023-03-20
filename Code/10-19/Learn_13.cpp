#include <iostream>
#include <string>

class IfSwitch {
public:
	void IfStatement(int age) {
		using namespace std;
		if (age > 16) {
			std::cout << "You are old enough" << std::endl;
		}
		else {
			cout << "You are too young" << endl;
		}
	};
	void SwtichStatement() {
		int day;
		using namespace std;
		cout << "What is the number of the week day?" << endl;
		cin >> day;
		switch (day) { //switch (condition)
		case 1: //if the condition is one, do the following
			cout << "So its monday!" << endl;
			break;
		case 2:
			cout << "So its tuesday!" << endl;
			break;
		case 3:
			cout << "So its wednesday!" << endl;
			break;
		case 4:
			cout << "So its thursday!" << endl;
			break;
		case 5:
			cout << "So its friday!" << endl;
			break;
		case 6:
		case 7: //If 6 or 7 is chosen
			cout << "So its the weekend! Yay!" << endl;
			break;
		default: //The default case if the day is not any of the represented numbers
			cout << "Thats not a day!" << endl;
		}

	}
};

int main() {
	IfSwitch run;
	run.IfStatement(13);
	run.SwtichStatement();
	return 0;
}
