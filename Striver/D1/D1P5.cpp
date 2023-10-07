#include<bits/stdc++.h>
using namespace std;
int p3(int n,int arr[]){
    int l=arr[0],m=arr[0],h=arr[n-1];
    
}
int main(){
    int n;
    cin>>n;
    int arr[3]={0},k;
    for(int i=0;i<n;i++){
        cin>>k;
        arr[k]++;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<arr[i];j++){
            cout<<i<<" ";
        }
    }
}
// Also Usable is 3 pointer approach 
