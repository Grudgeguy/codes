#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b){
    return a*b/gcd(max(a,b),min(a,b));
}
ll gcd2(ll a,ll b){
    if(!a&1 && !b&1) return 
}
int main(){
    ll a,b;
    cin>>a>>b;
    cout<<gcd(max(a,b),min(a,b))<<endl;
    cout<<lcm(a,b);
}