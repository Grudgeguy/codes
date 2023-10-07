// My DP solution another way for solving this was using 
// the recurrence relation of tribonacci by assigning 3 values to 0 1 2 
// value of the array by self
#include<bits/stdc++.h>
using namespace std;
long long rec(long long n){
    static long long arr[51]={0};
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(n>0&&n<=3){
        arr[n]=rec(n-1)+rec(n-2)+rec(n-3);
    }
    else{
        rec(3);
        for(int i=4;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
            // cout<<arr[i]<<" ";
        }
    }
    
    return arr[n];
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