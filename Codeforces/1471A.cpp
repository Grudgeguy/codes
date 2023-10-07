#include<cmath>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s=0,s1=0;
        cin>>n>>x;
        vector<float> v;
        int arr[n];
        float k;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s+=arr[i];
            k=arr[i]/(x*1.0);
            v.push_back(llround(k));
        }
        s=s/x;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
            s1+=v[i];
        }
        cout<<min(s,s1)<<" "<<max(s1,s)<<"\n";
    }
}