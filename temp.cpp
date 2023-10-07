#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define S second
#define L length()
#define F first
#define newline cout<<"\n";
#define all(x) x.begin(),x.end()
#define mod int(1e9+7)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;

bool cmp(pair<ll,ll>a,pair<ll,ll>b){
    return a.S<b.S;
}

void solve(){
    ll n,k;
    vector<pair<ll,ll>>v;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>k;
        v.pb({k,i+1});
    }
    sort(all(v),cmp);
    for(auto &i : v) cout<<i.S<<" ";
    cout<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE                                                                                                                                                        
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t; 
    while(t--) solve();
    return 0;
}