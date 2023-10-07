#include<bits/stdc++.h>
using namespace std;

int dp[(int)1e5+10];
int fj(vector<int>&v,int n,int idx){
    if(idx<=0) return 0;
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int a=abs(v[idx]-v[idx-1])+fj(v,n,idx-1);
    int b=INT_MAX;
    if(idx>1){
        b=abs(v[idx]-v[idx-2])+fj(v,n,idx-2);
    }
    return dp[idx]=min(a,b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    cout<<fj(v,n-1,n-1);
}