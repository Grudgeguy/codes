#include<vector>
#include<utility>
#include<iostream>
using namespace std;
int main(){
    int n,k1,k2;
    cin>>n;
    vector<pair<int , int > > v;
    for(int i=0;i<n;i++){
        cin>>k1>>k2;
        v.push_back(make_pair(k1,k2));
    }
    for(int i=0;i<n;i++){
        cout<< v[i].first<<" and "<<v[i].second<<endl;
    }
    for(auto p : v){
        cout<<p.first<<" and "<< p.second;
    }
}