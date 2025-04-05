/*Write a C++ program to input 3 sides of triangle and a triangle can be drawn
from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
scalene triangle*/

#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    
    // Input the three sides
    cout << "Enter the length of side 1: ";
    cin >> side1;
    
    cout << "Enter the length of side 2: ";
    cin >> side2;
    
    cout << "Enter the length of side 3: ";
    cin >> side3;
    
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cout << "Invalid input! Side lengths must be positive." << endl;
        
    }
    
    bool isTriangle = (side1 + side2 > side3) && 
                      (side1 + side3 > side2) && 
                      (side2 + side3 > side1);
    
    if (!isTriangle) {
        cout << "A triangle cannot be formed with these sides." << endl;
        return 1;
    }
    
    // Determine the type of triangle
    if (side1 == side2 && side2 == side3) {
        cout << "This is an equilateral triangle." << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "This is an isosceles triangle." << endl;
    } else {
        cout << "This is a scalene triangle." << endl;
    }
    
    return 0;
}