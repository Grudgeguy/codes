#include<bits/stdc++.h>
#define k INT16_MAX
using namespace std;
int mindis(int arr[],bool vis[]){
    int midx=-1,min=k;
    for(int i=0;i<4;i++){
        if(arr[i]<min && vis[i]==false){
            min =arr[i];
            midx = i;
        }
    }
    return midx;
}
int prim(int arr[4][4],int el){
    bool vis[4]={false};
    int dis[4];
    int parent[4];
    fill(parent,parent+4,-1);
    fill(dis,dis+4,k);
    int res=0;
    dis[el]=0;
    vis[el]=true;
    for(int i=0;i<3;i++){
        int u =mindis(dis,vis);
        vis[u]=true;
        for(int j=0;j<4;j++){
            if(arr[i][j]!=k && vis[i]==false && arr[i][j]<dis[j]){
                dis[j]=arr[i][j];
                parent[j]=i;
            }
        }
    }
    cout<<"Edge\tWeight"<<endl;
    for(int i=1;i<4;i++){
        cout<<parent[i]<<" - "<<i<<" - "<<arr[i][parent[i]]<<endl;
    }
}
int main(){
    int arr[4][4]={ {k,5,8,k},
                    {5,k,10,15},
                    {8,10,k,20},
                    {k,15,20,k}};
    prim(arr,0);
}