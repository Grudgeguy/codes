#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=arr[0],idx=0;
    for(int i=n-1;i>0;i--){
        mx=arr[0],idx=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>mx){
                mx=arr[j];
                idx=j;
            }
            int temp=arr[i];
            arr[i]=mx;
            arr[idx]=temp;  
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}