#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    vector<int> v1,v2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==0){
                v1.pb(i);
                v2.pb(j);
            }
        }
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<m;j++){
            a[v1[i]][j]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<v2.size();j++){
            a[i][v2[j]]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
// Make it space efficient by using setting 1st row and columns of the matrix 0
// so there will be no need to take additional arrays