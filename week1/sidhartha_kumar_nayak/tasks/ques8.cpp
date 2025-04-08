/*Write a C++ program to print the pattern sample output: 
   for n=4

    1   1 

   12   21 

  123   321 

 1234   4321*/

 #include <iostream>
 using namespace std;
 
 int main() {
     int n;
     cout << "Enter the value of n: ";
     cin >> n;
     
     for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= n - i; j++) {
             cout << "  ";
         }
         
         for (int j = 1; j <= i; j++) {
             cout << j;
         }
         
         cout << "  ";
         
         for (int j = i; j >= 1; j--) {
             cout << j;
         }
         
         cout << endl;
     }
     
     return 0;
 }