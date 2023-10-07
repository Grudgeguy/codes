#include<iostream>
using namespace std;
int main(){
    while(1){
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        int fib[n+1];
        fib[0]=0,fib[1]=1;
        for(int i=2;i<=n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        cout<<"Fib is : "<<fib[n]<<endl;
    }
}