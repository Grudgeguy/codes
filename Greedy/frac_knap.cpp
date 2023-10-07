#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    int n,cap;
    float k1,k2,res=0;
    cin>>n>>cap;
    vector <pair<float,float>>v;
    for(int i=0;i<n;i++){
        cin>>k1>>k2;
        v.pb(make_pair(k2/k1*1.0,k1));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n/2;i++){
        k1= v[i].first,k2=v[i].second;
        v[i].first=v[n-i-1].first,v[i].second=v[n-1-i].second;
        v[n-i-1].first=k1,v[n-1-i].second=k2;
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for(int i=0;i<n;i++){
        if(v[i].second>=cap){
            res+=(cap*v[i].first);
            cap=0;
            cout<<res<<endl;
        }
        else if(cap==0){
            break;
        }
        else{
            cap=cap-v[i].second;
            res+=v[i].first*v[i].second;
            
            cout<<res<<endl;
        }
    }
    cout<<"Result is :"<<res;
}