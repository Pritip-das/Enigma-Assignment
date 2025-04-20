#include <iostream>
using namespace std;


int sum(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum(n / 10);
}

int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    int s = sum(n);
    cout<<"sum of digit is  "<< s<<endl;
    
    return 0;
}
