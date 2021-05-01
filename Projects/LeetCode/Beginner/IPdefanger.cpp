#include <iostream>
#include <string>

using std::string;  

class Solution {
private:
    string defangIPaddr(string address) {
        string result = "";
        for (char c : address) {
            if (c == '.') result += "[.]"; // If It equals '.' just replace it with "[.]" and add it to res.
            else result += c; // If not add the original character to res.
        }
        return result;
    };
public:
    void defanfInpOut() {
        using std::cout;
        using std::cin;
        using std::endl;    
        string inputIPaddr;
        cout << "Type IPv4 Address to be defanged: " << endl;
        cin >> inputIPaddr;
        cout << "The defanged version off " << inputIPaddr << " is " << defangIPaddr(inputIPaddr) << endl;
    }
};

int main()
{
    Solution solution;
    solution.defanfInpOut();
    return 0;
}
