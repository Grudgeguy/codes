#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m.insert({i,arr[i]});
        }
        int k=0,c=1,a1[n];
        for(int i=0;i<n;i++){
            while(m[k]!=i+1){
                c++;
                k=m[k]-1;
            }
            k=i+1;
            a1[i]=c;
            c=1;
        }
        for(int i=0;i<n;i++){
            cout<<a1[i]<<" ";
        }
        printf("\n");
    }
}