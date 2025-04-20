#include <iostream>
#include <cctype>
using namespace std;

void countCharacters(const string& str) {
    int alphabets = 0, digits = 0, specials = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            alphabets++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (ispunct(ch)) {
            specials++;
        }
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << specials << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    countCharacters(input);

    return 0;
}
