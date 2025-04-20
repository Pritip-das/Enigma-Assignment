#include <iostream>
#include <string>
using namespace std;

string remove(const string& input) {
    string result;
    for (char ch : input) {
        if (isalpha(ch)) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string cleanS = remove(input);

    cout << "String after removing non-alphabet characters: " << cleanS << endl;

    return 0;
}
