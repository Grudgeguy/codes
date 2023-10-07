#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int k=i;
        for(int j=i-1;j>=0;j--){
            if(arr[k]<arr[j]){
                swap(arr[k],arr[j]);
                k--;
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// We check that arr(o,i) is sorted or not and we vary i from 1 to n 
