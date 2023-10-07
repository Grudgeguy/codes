#include<bits/stdc++.h>
using namespace std;
void dfs(){
    if(vis[n]) return;
    vis[n]=true;
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i]);
    }
    s.push(v[x][i]);
    
}
int main(){

}