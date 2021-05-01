#include <iostream>
#include <cmath>

class odd_or_even {
private:
	bool is_even(double numb) {
		if ((numb / 2) == std::floor(numb / 2)) {
			return true;
		}
		else {
			return false;
		};
	}
public:
	void input() {
		using std::cin;
		using std::cout;
		using std::endl;
		long double number;
		cout << "Input number: " << endl;
		cin >> number;
		if (is_even(number) == true) {
			cout << number << " Is an even number!" << endl;
		}
		else {
			cout << number << " Is an odd number!" << endl;
		}
	}
};

int main() {
	odd_or_even is_even;
	is_even.input();
	return 0;
}
