#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        long long int sr=m*(m+1)/2;
        long long int sc=n*(2*m+(n-1)*m)/2;
        cout<<sc+sr-m<<"\n";
    }
}