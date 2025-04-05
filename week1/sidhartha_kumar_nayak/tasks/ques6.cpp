#include <iostream>
using namespace std;

void printPattern(int n) {
    // Loop for each line (1 to n)
    for (int i = 1; i <= n; i++) {
        // For each line, each digit 1 to n is repeated i times
        for (int digit = 1; digit <= n; digit++) {
            // Repeat the current digit i times
            for (int repeat = 1; repeat <= i; repeat++) {
                cout << digit;
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Output for n = " << n << ":" << endl;
    printPattern(n);
    
    return 0;
}