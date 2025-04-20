#include <iostream>
using namespace std;

void sort(int X[], int m)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (X[i] > X[j])
            {
                int temp = X[i];
                X[i] = X[j];
                X[j] = temp;
            }
        }
    }
    cout << "sorted array :" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << X[i] << " ";
    }
    cout<<"2nd smallest element is"<<endl;
    cout<<X[1]<<" "<<endl;
}
int main()
{
    int n;
    cout << "enter the size of 1st array" << endl;
    cin >> n;
    int A[n];
    cout << "Enter the elements of 1st array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A, n);
    return 0;
}
