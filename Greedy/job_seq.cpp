#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    vector<pair<int,int>> v;
    int n,k1,k2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k1>>k2;
        v.pb(make_pair(k2,k1));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n/2;i++){
        k1= v[i].first,k2=v[i].second;
        v[i].first=v[n-i-1].first,v[i].second=v[n-1-i].second;
        v[n-i-1].first=k1,v[n-1-i].second=k2;
    }
    int arr[n+1]={0};
    int sum=0;
    for(int i=1;i<=n;i++){
        if(arr[v[i-1].second] == 0){
            arr[v[i-1].second]=v[i-1].first;
            // cout<<sum<<endl;
            sum+=v[i-1].first;
        }
        else{
            for(int j=1;j<=n;j++){
                if(arr[j]==0 && v[i-1].second>=j){
                    arr[j]=v[i-1].first;
                    // cout<<sum<<endl;
                    cout <<"Adding "<<v[i-1].second<<" of "<<v[i-1].first<<"to  "<<j<<endl;
                    sum+=v[i-1].first;
                    break;
                }
                if(v[i-1].second<j){
                    break;
                }
            }
        }
    }
    cout<<sum<<endl;
}   