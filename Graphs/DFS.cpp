#include<iostream>
using namespace std;
void DFS(int arr[7][7],int el){
    static int vis[7]={0};
    if(vis[el]==0){
        vis[el]=1;
        cout<<el<<" ";
    }
    for(int i=1;i<=7;i++){
        if(arr[el][i]==1 && vis[i]==0){
            cout<<i<<" ";
            vis[i]=1;
            DFS(arr,i);
        }
    }
}
int main(){
    int arr[7][7]={ {0,0,0,0,0,0,0},
                    {0,0,1,1,0,0,0},
                    {0,1,0,0,1,0,0},
                    {0,1,0,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0}};
    DFS(arr,5);
}