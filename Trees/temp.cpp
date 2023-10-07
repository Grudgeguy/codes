#include<bits/stdc++.h>
#define F first
#define S second
#define L length()
#define pb push_back
#define ll long long
#define lld long double
#define ml map<ll,ll> mll;
#define ms unordered_map<string,string> mss;
#define mb unordered_map<ll,bool> mlb;
#define all(x) x.begin(),x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define mod int(1e9+7)
using namespace std;

// vector<ll> dp;
// ll arr[int(2e5+10)];
// ll dp[int(2e5+10)];

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // memset(dp,0,n*sizeof(ll));

    ll T=1;
    // cin>>T;
    while(T--){
        ll m,s;
        cin>>m>>s;
        ll k=s/9;
        if(s%9==0){
            if(k==m){
                for(ll i=0;i<s;i++)cout<<'9';
                cout<<endl;
            }
            else if(k<m)cout<<"-1 -1";
        }
    }
}