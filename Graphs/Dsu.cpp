#include<bits/stdc++.h>
using namespace std;

class DSU{
    vector<int>rank,parent,size;
    public:
    DSU(int n){
        rank.resize(n+1,0);
        size.resize(n+1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++) parent[i]=i;
    }

    int findParent(int n){
        if(parent[n] ==n ) return n;
        else return parent[n]=findParent(parent[n]);
    }

    void unionRank(int a,int b){
        int u = parent[a];
        int v = parent[b];
        if(u==v) return;
        else if(rank[u]<rank[v]){
            parent[u] = v;
        }
        else {
            parent[v] = u;
            rank[u]++;
        }
    }

    void unionSize(int a,int b){
        int u = parent[a];
        int v = parent[b];
        if(u==v) return;
        else if(size[u]<size[v]){
            parent[u] = v ;
            size[v] +=size[u];
        }
        else{
            parent[v] = u;
            size[u]+=size[v];
        }
    }
};

int main(){
    
}