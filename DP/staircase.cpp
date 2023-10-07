// My Solution ---> Recursive approach


#include<bits/stdc++.h>
using namespace std;
long long rec(long long level){
    if(level == 0){
        return 1;
    }
    else if(level<0){
        return 0;
    }
    else{
        long long a= rec(level-1)+rec(level-2)+rec(level-3);
        cout<<a<<" ";
        return a;
    }
}
void solve(){
    long long n;
    cin>>n;
    cout<<rec(n)<<endl;
}
int main(){
    long long t=1;
    cin>>t;
    for(long long i=0;i<t;i++){
        solve();
    }
}