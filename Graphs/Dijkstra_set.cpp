#include<bits/stdc++.h>
#define ll long long
#define S second
#define F first
using namespace std;

void solve(){
    int source = 0;
    vector<vector<pair<int,int>>>v = { {{1,4},{2,4}},{{0,4},{2,2}},{{0,4},{1,2},{3,3},{4,1},{5,6}},{{2,3},{5,2}},{{2,1},{5,3}},{{2,6},{3,2},{4,3}} }; // input 
    set<pair<int,int>>pq;
    vector<int> dis(v.size(),INT_MAX);
    pq.insert({0,source});
    dis[source]=0;
    while(!pq.empty()){
        int distance = pq.begin()->F; 
        int node = pq.begin()->S;
        pq.erase(pq.begin());
        for(auto &i : v[node]){
            int upcoming_node = i.F;
            int upcoming_weight = i.S;
            if(distance + i.S < dis[upcoming_node]){
                dis[upcoming_node] = distance + upcoming_weight;
                pq.insert({dis[upcoming_node],upcoming_node});
            }
        }
    }
    for(auto &i : dis) cout<<i<<" ";
}

int main(){
    ll t=1;
    // cin>>t; 
    while(t--) solve();
    return 0;
}