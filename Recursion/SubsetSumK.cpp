#include<bits/stdc++.h>
using namespace std;
long long sum=0;
bool subsum(vector<int>v, int size, int i,int k){
    if(i>=size) {
        if(sum==k) return true;
        return false;
    }
    sum+=v[i];
    bool a=subsum(v,size,i+1,k);
    sum-=v[i];
    bool b=subsum(v,size,i+1,k);
    return a|b;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i : v) cin>>i;
    cout<<endl;
    if(subsum(v,v.size(),0,k)) cout<<"exists";
    else cout<<"doesnotexist";
}