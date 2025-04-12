#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<< "Enter the number of rows in matrix 1"<<endl;
    cin>>m;
    cout<< "Enter the number of column in matrix 1"<<endl;
    cin>>n;
    int A[m][n];
    cout << "Enter the elements for matrix 1:-"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<< "Enter the number of rows in matrix 2"<<endl;
    cin>>p;
    cout<< "Enter the number of rows in matrix 2"<<endl;
    cin>>q;
    int B[p][q];
    cout << "Enter the elements for matrix 2:-"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>B[i][j];
        }
    }
    cout<<"Matrix 1:-"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2:-"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum[m][n];
    if((m==p)&&(n==q)){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)              
            sum[i][j]=A[i][j]+B[i][j];      
        }
        cout<<"The sum of original matrix is:-"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
    }
        

    else {
        cout<<"Addition not perform;check the condition"<<endl;
    }
    int TA[n][m],TB[q][p];
   
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            TA[j][i]=A[i][j];
        }
    }
    
    for (int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            TB[j][i]=B[i][j];
        }
    }
    cout<<"The transpose of matrix 1 is :-"<<endl;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<TA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The transpose of matrix 2 is :-"<<endl;
    for (int i=0;i<q;i++){
        for(int j=0;j<p;j++){
            cout<<TB[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;   
}

    
    
    