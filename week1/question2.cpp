#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Triangle can be formed." << endl;

        if (a == b && b == c) {
            cout << "It is an Equilateral triangle." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "It is an Isosceles triangle." << endl;
        } else {
            cout << "It is a Scalene triangle." << endl;
        }
    } else {
        cout << "Triangle cannot be formed with the given sides." << endl;
    }

    return 0;
}
