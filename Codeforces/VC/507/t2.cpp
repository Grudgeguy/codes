#include<iostream>
using namespace std;
int main(){

    long long int n,k;
    cin>>n>>k;
    long long int t=2*k+1;
    long long int j=1;
    if(n%t==0){
        cout<<n/t<<"\n";
        for(int i=0;i<n/t;i++){
            cout<<j<<" ";
            j+=t;
        }
        cout<<"\n";
    }
    else{
        cout<<n/t+1<<"\n";
        for(int i=0;i<n/t+1;i++){
            cout<<j<<" ";
            j+=t;
        }
        cout<<"\n";
    }
}