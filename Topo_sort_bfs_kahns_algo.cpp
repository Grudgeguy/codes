#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;

void solve(){
    vector<vector<int>>v = { {},{},{3},{1},{0,1},{0,2} }; // input 
    vector<int>indegree(v.size(),0);
    for(auto &i : v){
        for(auto &j : i) indegree[j]++;
    }
    queue<int>q;
    vector<int>topo;
    for(int i=0;i<v.size();i++) if(!indegree[i]) q.push(i);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.pb(node);
        for(auto &i : v[node]){
            --indegree[i];
            if(!indegree[i]) q.push(i);
        }
    }   
    for(auto &i : topo) cout<<i<<" ";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    // cin>>t; 
    while(t--) solve();
    return 0;
}