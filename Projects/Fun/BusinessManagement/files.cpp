#include <ios>
#include <fstream>
#include <istream>
#include <iostream>
#include <sstream>
#include <string>
#include "files.h"
using namespace std;

unsigned long long line_amount() {
	string line;
	ifstream file("banking_data.csv");
	if (file.is_open())
	{
		int count = 0;
		while (!file.eof())
		{
			getline(file, line);
			cout << line << endl;
			count++;
		}
		file.close();
		return count;
	};
}

void add() {
	fstream fout;

	fout.open("banking_data.csv", ios::out | ios::app);

	long long id, bal, credit_score, dob;
	string name, lname; 

	id = line_amount();
	
	cout << "First Name: " << endl;
	cin >> name;
	cout << "Last Name:" << endl;
	cin >> lname;
	cout << "Balance: " << endl;
	cin >> bal;
	cout << "Credit Score: " << endl;
	cin >> credit_score;
	cout << "Date of Birth: " << endl;
	cin >> dob;

    // Insert the data to file
    fout << id << ", " << name << ", " << lname << ", " << bal << ", " << credit_score << ", "  << dob << "\n";
}

void read_record() {
	fstream fin;

	fin.open("banking_data", ios::in);
}
