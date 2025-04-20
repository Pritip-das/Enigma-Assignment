#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int alphabets = 0, digits = 0, specialChars = 0;

    cout << "Enter a string: ";
    getline(cin, input); 

    for (char ch : input) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else if (!isspace(ch))
            specialChars++;
    }

    cout << "\nTotal Alphabets: " << alphabets << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << specialChars << endl;

    return 0;
}
