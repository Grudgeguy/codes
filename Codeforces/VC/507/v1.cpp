#include<iostream>
using namespace std;
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n,a,b,wh=0,blk=0,emp=0;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int f=0;
        for(int i=0;i<n/2;i++){
            if((arr[i]==1 && arr[n-1-i]==0)||(arr[i]==0 && arr[n-1-i]==1)){
                f=1;
                break;
            }
            else if(  min(arr[i],arr[n-1-i])==0 && arr[i]!=arr[n-1-i]){
                wh++;
            }
            else if(min(arr[i],arr[n-1-i])==1 && arr[i]!=arr[n-i-1]){
                blk++;
            }
            else if(min(arr[i],arr[n-1-i])==2){
                emp+=2;
            }
        }
        if(n%2==1){
            if(arr[(n)/2]==2){
                emp++;
            }
        }
        if(f==1){
            cout<<"-1\n";
        }
        else{
            cout<<a*wh + b*blk + min(a,b)*emp<<"\n";
        }
}