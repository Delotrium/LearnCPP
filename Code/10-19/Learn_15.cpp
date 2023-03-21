#include <iostream>
#include <string>


namespace firstnamespace { //Define a namespace called "firstnamespace"
	void Foo() { //Note how the function name is the same in both namespaces; but there are not any errors as they are seperated into different namespaces
		std::cout << "This is in the first namespace!" << std::endl;
	};
};

namespace secondnamespace {//Define a namespace called "secondnamespace"
	void Foo() {
		std::cout << "This is in the second namespace!" << std::endl;
	};
};

class Program {
public:
	void CaseRun(int choice) {
		switch (choice) {
		case 1:
			firstnamespace::Foo(); //Run the "Foo" function, from the first namespace
			break;
		case 2:
			secondnamespace::Foo(); //Run the "Foo" function, from the second namespace
			break;
		default:
			std::cout << "Invalid Input" << std::endl;
			break;
		};
	};
	void ProgramRun() {
		std::cout << "Which namespace do you want to access?" << std::endl;
		int Choice;
		std::cin >> Choice;
		CaseRun(Choice);
	};
};

int main() {
	Program run;
	run.ProgramRun();
	return 0;
}
