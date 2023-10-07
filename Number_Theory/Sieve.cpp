#include<bits/stdc++.h>
using namespace std;
#define N 31623
vector<bool> prime(N,1);
int main(){
    prime[0]=prime[1]=0;
    for(int i=2;i<N;i++){
        if(prime[i]==1){
            for(int j=2;j*i<N;j++){
                prime[j*i]=0;
            }
        }
    }
    vector<int> pr;
    for(int i=0;i<N;i++){
        if(prime[i]==1){
            pr.push_back(i);
        }
    }
    for(auto i : pr){
        cout<<i<<endl;
    }
}