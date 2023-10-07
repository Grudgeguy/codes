#include<vector>
#include<iostream>
#define pb push_back
using namespace std;
int main(){
    int m,n,vecin;
    cin>>m>>n;
    // vector <int> v[m];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>vecin;
    //         v[i].push_back(vecin);
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<v[i][j<<" ";
    //     }
    //     cout<<"\n";
    // }


    // vector <vector<int>> v;
    // for(int i=0;i<m;i++){
    //     vector <int> tmp;
    //     for(int i=0;i<n;i++){
    //         cin>>vecin;
    //         tmp.pb(vecin);
    //     }
    //     v.pb(tmp);
    // }
    // for(auto k : v){
    //     for(auto z : k){
    //         cout<<z<<" ";
    //     }
    //     cout<<"\n";
    // }


    vector <vector<int>> v;
    for(int i=0;i<m;i++){
        v.pb(vector<int> ());
        for(int i=0;i<n;i++){
            cin>>vecin;
            v[i].pb(vecin);
        }
    }
    for(auto k : v){
        for(auto z : k){
            cout<<z<<" ";
        }
        cout<<"\n";
    }
}