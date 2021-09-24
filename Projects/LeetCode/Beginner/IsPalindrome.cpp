
#include <iostream>
#include <string>
#include <string.h>
#include<algorithm>
using std::string;

class Solution {
private:
    string Palindrome(string address) {
        string result = "";
        for (char c : address) {
            if (isspace(c)) result += ""; // If It equals ' ' just replace it with "" and add it to res.
            else result += c; // If not add the original character to res.
        }
        return result;
    };
    string lower_string(string str)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
                str[i] = str[i] + 32;         //converting uppercase to lowercase
        }
        return str;
    }

public:
    void PalindromeInpOut() {
        using std::cout;
        using std::cin;
        using std::endl;
        string inputPhrase;
        cout << "Type the phrase to check if it is a palindrome: " << endl;
        std::getline(cin, inputPhrase);
        string palindromeString = lower_string(Palindrome(inputPhrase));
        string Reversed = string(palindromeString.rbegin(), palindromeString.rend());
        if ((Reversed) == lower_string((Palindrome(inputPhrase)))) {
            cout << inputPhrase << " is a palindrome!" << std::endl;
        }
        else {
            cout << inputPhrase << " is not a palindrome!" << std::endl;;
        }
    }
};

int main()
{
    Solution solution;
    solution.PalindromeInpOut();
    return 0;
}
