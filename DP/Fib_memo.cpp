#include<iostream>
using namespace std;
int fib(int *arr,int n){
    if(arr[n]==-1){
        arr[n]=fib(arr,n-1)+fib(arr,n-2);
        return arr[n];
    }
    else{
        return arr[n];
    }
}
int main(){
    while(1){
        int n;
        cout<<"Enter a Number : ";
        cin>>n;
        int arr[n+1];
        for(int i=2;i<=n;i++){
            arr[i]=-1;
        }
        arr[0]=0;
        arr[1]=1;
        cout<<fib(arr,n)<<endl;
    }
}