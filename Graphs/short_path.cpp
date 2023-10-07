// shortest path in an unweighted graph

#include<bits/stdc++.h>
#define s cout<<"Success\n";
#define MAX 1000
using namespace std;
// int srt(int arr[][6],int el){
//     int u;
//     int dis[6],vis[6]={0};
//     for(int i=0;i<6;i++){
//         dis[i]=0;
//     }
//     queue <int> q;
//     vis[el]=1;
//     q.push(el);
//     while(q.size()!=0){
//         u=q.front();        
//         q.pop();
//         for(int i=0;i<6;i++){
//             if(arr[u][i]==1 && vis[i]==0){
//                 dis[i]=1+dis[u];
//                 vis[i]=1;
//                 q.push(i);
//             }
//         }
//     }
//     for(int i=0;i<6;i++){
//         cout<<"Dis "<<i <<" : "<<dis[i]<<endl;
//     }
// }
void sd(int arr[][6],int el){
    int dis[6]={0};
    // dis[el]=-1;
    queue <int> q;
    q.push(el);
    while(q.size()!=0){
        int u=q.front();
        q.pop();
        for(int i=0;i<6;i++){
            if(arr[u][i]==1 && dis[i]==0){
                dis[i]=dis[u]+1;
                if(i!=el){
                    q.push(i);
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<dis[i]<<" ";
    }
}
int main(){
    int arr[6][6]={ {0,1,1,0,0,0},
                    {1,0,1,1,0,0},
                    {1,1,0,1,0,0},
                    {0,1,1,0,1,0},
                    {0,0,0,1,0,1},
                    {0,0,0,0,1,0}};
    sd(arr,0); 
}