#include <iostream>
using namespace std;

void removeCharacter(string& str, char ch) {
    int index = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            str[index++] = str[i];
        }
    }
    str.resize(index);
}

int main() {
    string input;
    char ch;
    getline(cin, input);
    cin >> ch;
    removeCharacter(input, ch);
    cout << input << endl;
    return 0;
}
