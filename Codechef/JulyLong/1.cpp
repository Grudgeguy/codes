#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,s=0,f=0;
        cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++){
            cin>>k;
            s+=k;
            if(k==1){
                f=1;
            }
            v.push_back(k);
        }
        if(f==1){
            cout<<"CHEF\n";
        }
        else{
        if(s%2==0){
            cout<<"CHEFINA\n";
        }
        else{
            cout<<"CHEF\n";
        }
        }
    }
}