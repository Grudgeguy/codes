#include<bits/stdc++.h>
#define ll long long 
using namespace std;
// works on negative weights also and if -ve cycles are present then at the Nth iteration
// the weight will again update

void solve(){
    int source = 0;
    int number_of_nodes = 6;
    vector<vector<int>>v = { {3,2,6},{5,3,1},{0,1,5},{1,5,-3},{1,2,-2},{3,4,-2},{2,4,3}};
    vector<int> dis(number_of_nodes,INT_MAX);
    dis[source] = 0 ;
    for(int i =0 ;i<v.size()-1;i++){
        for(auto &i : v){
            int curnode = i[0];
            int upcomingnode = i[1];
            int weight = i[2];
            if(dis[curnode]!=INT_MAX &&  dis[curnode] + weight < dis[upcomingnode]){
                dis[upcomingnode] = dis[curnode] + weight;
            }
        }
    }
    vector<int>dis2 = dis;
    for(auto &i : v){
        int curnode = i[0];
        int upcomingnode = i[1];
        int weight = i[2];
        if(dis[curnode]!=INT_MAX &&  dis[curnode] + weight < dis[upcomingnode]){
            dis[upcomingnode] = dis[curnode] + weight;
        }
    }
    if(dis!=dis2) cout<<-1<<endl;
    else
    for(auto &i : dis) cout<<i<<" ";
}

int main(){
    ll t=1;
    // cin>>t; 
    while(t--) solve();
    return 0;
}