#include<iostream>
int fibo(int x);

using namespace std;
int main(){
    int n;
    cout<<"enter the number of terms"<<endl;
    cin>>n;
    
       for(int i=0;i<n;i++){
    cout<<fibo(i)<<" ";
       }
    return 0;
}
int fibo(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }   
    else{
        return(fibo(x-1)+fibo(x-2));
    }
}
