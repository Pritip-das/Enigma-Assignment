#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout << "enter the size of 1st array"<<endl;
    cin >> n ;
    int A[n];
    cout<<"Enter the elements of 1st array"<<endl;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    for( int i=0;i<n;i++){
        cout<< A[i] <<endl;
    }
  
    cout << "enter the size of 2nd array"<<endl;
    cin >> m ;
    int B[m];
    cout<<"Enter the elements of 2nd array"<<endl;

    for(int j=0;j<m;j++){
        cin >> B[j];
    }

    for(int j=0;j<m;j++){
        cout<< B[j] <<endl;
        
    }
        int C[n+m];
        cout<<"merged array"<<endl;

        for(int i=0;i<n;i++){         
        
            C[i]=A[i];
        }

    for( int j=0;j<n;j++){
          
        C[n+j]=B[j];
        }
    
    
        for (int k=0;k<(n+m);k++){
            cout<<C[k]<<endl;
        }
        return 0;
}
