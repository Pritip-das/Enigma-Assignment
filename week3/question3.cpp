#include <iostream>
#include <cctype>
using namespace std;

void removeNonAlphabets(string& str) {
    int index = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            str[index++] = str[i];
        }
    }
    str.resize(index);
}

int main() {
    string input;
    getline(cin, input);
    removeNonAlphabets(input);
    cout << input << endl;
    return 0;
}
