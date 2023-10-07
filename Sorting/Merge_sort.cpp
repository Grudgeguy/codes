#include<bits/stdc++.h>
using namespace std;
void _sort(vector<int>&v, int l, int m , int h){
    int i=l,j=m+1;
    vector<int>q;
    while(i<=m && j<=h){
        if(v[i]<v[j]) q.push_back(v[i++]);
        else q.push_back(v[j++]);
    }
    while(i<=m) q.push_back(v[i++]);
    while(j<=h) q.push_back(v[j++]);
    j=l;
    for(i=0;i<q.size();i++){
        v[j++]=q[i];
    }
    return;
}
void divide(vector<int>&v, int l,int h){
    if(l==h) return;
    int m=(l+h)/2;
    divide(v,l,m);
    divide(v,m+1,h);
    _sort(v,l,m,h);
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i : v) cin>>i;
    cout<<endl;
    divide(v,0,n-1);
    for(auto &i : v){
        cout<<i<<" ";
    }
}