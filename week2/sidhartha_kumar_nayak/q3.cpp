#include <iostream>
using namespace std;
int main()
{
    int m;

    cout << "enter the size of an array" << endl;
    cin >> m;
    int A[m];
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    cout << "The input array A is" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << " " << A[i];
    }
    cout << endl;
    int B[m];
    for (int i = 0; i < m; i++){
        B[i]=A[i];
    }
         
    
    cout << "cloned array B is" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}
