#include <iostream>
#include <string>
using namespace std;

string removeChar(string str, char ch) {
    string result = "";

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ch) {
            result += str[i];
        }
    }

    return result;
}

int main() {
    string input;
    char target;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to remove: ";
    cin >> target;

    string updatedStr = removeChar(input, target);

    cout << "String after removing '" << target << "': " << updatedStr << endl;

    return 0;
}
