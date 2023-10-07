#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    bool f=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN,s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s>mx){
            mx=s;
        }
        if(s<0){
            s=0;
        }
    }
    if(s>mx){
        mx=s;
    }
    if(s<0){
        s=0;
    }
    cout<<mx;
}
// For getting a max sum i calculated all the positive sums
// or the least neagative sums i can get and compared it to
// max variable if it is greater than the previos max
// then update mx and print the op
