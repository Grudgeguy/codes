#include<bits/stdc++.h>
#define k INT16_MAX
using namespace std;
int spd(int arr[][4],int el){
    queue<int> q;
    int a[4],vis[4]={0};
    q.push(el);
    for(int i=0;i<4;i++){
        a[i]=k;
    }
    a[el]=0;
    q.push(el);
    while(q.size()!=0){
        int u=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            if( arr[u][i]+a[u]< a[i] ){
                a[i]=arr[u][i]+a[u];
                q.push(i);
            }
        }
    }
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[4][4]={ {k,1,k,k},
                    {k,k,3,2},
                    {k,k,k,4},
                    {k,k,k,k}};
    spd(arr,0);
}