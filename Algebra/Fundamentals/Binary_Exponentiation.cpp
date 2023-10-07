#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll power(ll num,ll pow){
    if(pow==0) return 1;
    ll q=power(num,pow/2);
    if(pow&1) return q*q*num;
    return q*q;
}
int main(){
    ll num,pow;
    cin>>num>>pow;
    cout<<power(num,pow);
}