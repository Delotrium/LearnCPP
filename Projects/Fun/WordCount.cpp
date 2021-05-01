#include <iostream>
#include <string>

using std::string;

class word_count {
private:
	bool ques_mode = 1;
public:
	int Count_Words(string note) {
		int count = (std::count(note.begin(), note.end(), ' ')) + 1;
		return count;
	};

	void QuestionCount() {
		using std::cout;
		using std::cin;
		using std::endl;
		cout << "So... what is on your mind? ";
		string response;
		std::getline(cin, response);
		cout << "oh nice, you just told me what's on your mind in " << Count_Words(response) << " words!" << endl;
	};
	
	void WordCount() {
		using std::cout;
		using std::cin;
		using std::endl;
		cout << "Find the word count of: " << endl;
		string msg;
		std::getline(cin, msg);
		cout << "The word count is: " << Count_Words(msg) << endl;
	};

	void run() {
		if (ques_mode == 0) {
			WordCount();
		}
		else {
			QuestionCount();
		}
	};
};

int main() {
	word_count word_count;
	word_count.run();
	return 0;

}
