#include<bits/stdc++.h>
using namespace std;

int dp[(int)1e5+10];
int fj(vector<int>&v,int n,int idx,int k){
    if(idx<=0) return 0;
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int a=INT_MAX;
    for(int i=1;i<=k;i++){
        if(idx-i>=0) a=min(a,abs(v[idx]-v[idx-i])+fj(v,n,idx-i,k));
    }
    return dp[idx]=a;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp,-1,sizeof(dp));
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    cout<<fj(v,n-1,n-1,k);
}