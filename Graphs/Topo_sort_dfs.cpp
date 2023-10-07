#include<bits/stdc++.h>
#define ll long long
using namespace std;

void dfs(int n, vector<vector<int>>&v, vector<bool>&vis,stack<int>&st){
    if(vis[n]) return;
    vis[n]=true;
    for(auto &i : v[n]) dfs(i,v,vis,st);
    st.push(n);
    return;
}

void solve(){
    stack<int>st;
    vector<vector<int>>v = { {},{},{3},{1},{0,1},{0,2} }; // input 
    vector<bool>vis(v.size(),false);
    for(int i=0;i<v.size();i++) dfs(i,v,vis,st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}


int main(){
    ll t=1;
    // cin>>t; 
    while(t--) solve();
    return 0;
}