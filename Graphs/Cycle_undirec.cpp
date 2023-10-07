//works for both directed and non directed graph
#include<bits/stdc++.h>
using namespace std;
bool cyd(int arr[][2],int el){
    int vis[2]={0};
    queue<int> q;
    q.push(el);
    while(q.size()!=0){
        int u = q.front();
        q.pop();
        vis[u]++;
        for(int i=0;i<2;i++){
            if(arr[u][i]==1 && (vis[i]==0)){
                cout<<"visiting "<<u<<" to "<<i<<endl;
                vis[i]++;
                q.push(i);
                arr[i][u]=0;
            }
            else if(arr[u][i]==1 && vis[i]==1){
                cout<<"visiting "<<u<<" to "<<i<<endl;
                return false;
            }
        }
    }
    return true;
}
int main(){
    // int arr[6][6]={ {0,1,0,1,0,0},
    //                 {0,0,1,0,0,0},
    //                 {1,0,0,0,0,0},
    //                 {0,0,0,0,1,0},
    //                 {0,0,0,0,0,1},
    //                 {0,0,0,1,0,0}};

    int arr[2][2]={{0,1},{1,1}};
    bool t= cyd(arr,0);
    if(t){
        cout<<"Cycle Not present \n";
    }
    else{
        cout<<"Cycle Detected\n";
    }
}