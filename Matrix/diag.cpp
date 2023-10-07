#include<bits/stdc++.h>
using namespace std;
int main(){
    int ds;
    cin>>ds;
    int arr[ds];
    for(int i=0;i<ds;i++){
        cin>>arr[i];
    }
    for(int i=0;i<ds;i++){
        for(int j=0;j<ds;j++){
            if(i==j){
                cout<<arr[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}