#include <iostream>
#include <string>
using namespace std;

string Lower(string str) {
    for (int i = 0; i < str.length(); ++i) {
        // Check if character is uppercase (A-Z)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string lowercaseStr = Lower(input);
    cout << "Lowercase string: " << lowercaseStr << endl;
    return 0;
}
