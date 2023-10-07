#include<queue>
#include<iostream>
using namespace std;
void BFS(int arr[][7],int el){
    queue<int> q;
    int vis[7]={0},u;
    q.push(el);
    vis[el]=1;
    cout<<el<<" ";
    while(q.size()!=0){
        u=q.front();
        q.pop();
        for(int i=1;i<=7;i++){
            if(vis[i]==0 && arr[u][i]==1){
                cout<<i<<" ";
                q.push(i);
                vis[i]=1;
            }
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
    int n;
    cin>>n;
    BFS(arr,n);
}