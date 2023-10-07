#include<math.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0,i=9;
        cin>>n;
        int l=n;
        int arr[10];
        while(1){
            if(pow(3,i)<=n){
                k+=pow(3,i);
                n-=pow(3,i);
                arr[i]=1;
            }
            i--;
            if(i==1){
                break;
            }
        }
        if(n>0){
            arr[0]=1;
            n-=1;
            k+=1;
        }
        if(n!=0){
        for(int i=0;i<10;i++){
            if(arr[i]==0){
                k+=pow(3,i);
                n-=pow(3,i);
            }
            if(n<=0){
                break;
            }
        }
        }
        cout<<k<<"\n";
    }
}