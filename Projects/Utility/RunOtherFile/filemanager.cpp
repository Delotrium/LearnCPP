#include <iostream>
#include <string>

using std::string;

class FileManager {
	string python_path = "./test.py";
public:
	void run_python(string pathname) {
		string command = "python ";
		string run_file = command += pathname;
		system(run_file.c_str());
	}

	void run() {
		run_python(python_path);
	}
};
	
int main() {
	FileManager File;
	File.run();
	return 0;
}
