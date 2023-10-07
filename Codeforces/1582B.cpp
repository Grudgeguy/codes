#include<cmath>
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,z=0,o=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                z++;
            }
            if(arr[i]==1){
                o++;
            }
        }
        if(z>0){
        cout<<(long long int)(pow(2,z)-1)*o + o<<"\n";
        }
        else{
            cout<< o<<"\n";
        }
    }
}