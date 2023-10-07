#include<iostream>
using namespace std;
void arev(int arr[],int n){
    int t;
    for(int i=0;i<n/2;i++){
        t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arev(arr,n);
    for(auto i : arr){
        cout<<i<<"\t";
    }
}