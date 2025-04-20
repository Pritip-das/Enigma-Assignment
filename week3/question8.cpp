#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string input;
    getline(cin, input);
    if (isPalindrome(input)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
