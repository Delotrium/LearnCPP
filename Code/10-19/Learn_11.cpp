#include <iostream>
#include <vector>

using namespace std;

class Vectors {
public:
	void VectorTools() {
		vector<int> VectorInt = { 1,2,3,4,5 };
		cout << VectorInt[1] << endl; //Prints the first element of the vector, in this case it would be two. 
		cout << VectorInt.front() << endl; //Prints the front, or 0th, element of the vector, in this case it would be 1
		cout << VectorInt.back() << endl; //Opposite as above
		cout << VectorInt.size() << endl; //{rints the size, or amount of elements, in the vector
		cout << VectorInt.capacity() << endl; //The amount of ALLOCATED size to the vector
		VectorInt.push_back(1);  //Appends the value "1" to the vector
		VectorInt.pop_back(); //Removes the last element
		VectorInt.shrink_to_fit(); //Removes any unallocated space to the minimal possible amount
	};
	void Interation(vector<int> v1) {
		for (auto itr = v1.begin(); itr != v1.end(); ++itr) {
			cout << *itr << endl;
		}
	};
	vector<int> Insert(vector<int> v2, int element, int number  ) {
		v2.insert(v2.begin() + element, number);
		return v2;
	}
};

int main() {
	Vectors Vector;
	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2 = Vector.Insert(v1, 1, 42);
	Vector.Interation(v2);
	return 0;
}
