/*Write a C++ program to print the pattern
sample output:

n=3

1*2*3
4*5*6
7*8*9

n=4

1*2*3*4
5*6*7*8
9*10*11*12*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int num = 1; 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num++;
            
            if (j < n - 1) {
                cout << "*";
            }
        }
        cout << endl; 
    }
    
    return 0;
}