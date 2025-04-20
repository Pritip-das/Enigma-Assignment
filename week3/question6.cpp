#include <iostream>
using namespace std;

void toLowerCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    toLowerCase(input);
    cout << input << endl;
    return 0;
}
