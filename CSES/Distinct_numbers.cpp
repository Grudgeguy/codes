#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> s;
    int n;
    cin>>n;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        s.insert(k);
    }
    cout<<s.size();
}