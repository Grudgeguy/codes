#include<iostream>
using namespace std;
#define ll long long
ll binexp(ll a,ll b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        ll res=binexp(a,b/2);
        return res*res;
    }
    else{
        ll res=binexp(a,b/2);
        return res*res*a;
    }
}
int main(){
    ll n,p;
    cin>>n>>p;
    cout<<binexp(n,p);
} 