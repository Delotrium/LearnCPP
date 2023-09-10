#include <iostream>
#include <string>
#include <iterator>
#include <list>
#include <random>

class Program
{
private:
	std::string ProgramChoice()
	{
		std::list < std::string>SPR = { "scissors", "paper", "rock" };
		std::list<std::string>::iterator SPRit = SPR.begin();
		srand(time(NULL));
		std::advance(SPRit, rand() % SPR.size());
		return *SPRit;
	};
	bool IsWin(std::string userchoice, std::string programchoice)
	{
		if (userchoice == "scissors" and programchoice == "paper")
		{
			return 1;
		}
		else if (userchoice == "paper" and programchoice == "rock")
		{
			return 1;
		}
		else if (userchoice == "rock" and programchoice == "scissors")
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
public:
	void Run()
	{
		using namespace std;
		cout << "Scissors, paper, or rock?" <<endl;
		string Input;
		cin >> Input;
		if (Input == ProgramChoice())
		{
			cout << "We tied!" << endl;
		}
		else
		{
			if (IsWin(Input, ProgramChoice()) == 1)
			{
				cout << "You Won! I chose " + ProgramChoice() + "!";
			}
			else if (IsWin(Input, ProgramChoice()) == 0)
			{
				cout << "You lost! I chose " + ProgramChoice() + "!";
			}
		}
	}
	


};

int main()
{
	Program main;
	main.Run();
	return 0;
}
