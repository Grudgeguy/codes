#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==1){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"2\n";
        }
        else{
            cout<<"1\n";
        }
    }
}