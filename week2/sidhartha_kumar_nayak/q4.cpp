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
    int max=A[0];
   for (int i=0;i<m;i++){
    if(A[i]>A[0]){
        max=A[i];
    }
   }
   cout<<endl<<"the maximem element in array is "<<endl;
   cout<<max<<" ";
    return 0;
}
