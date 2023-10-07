#include<iostream>
using namespace std;
void ins(int *arr,int el,int size){
    if(size==0){
        arr[1]=el;
    }
    else{
        arr[size+1]=el;
        int i=size+1;
        while(arr[i] > arr[i/2] && i>1){
            int t=arr[i];
            arr[i]=arr[i/2];
            arr[i/2]=t;
            i=i/2;
        }
    }
}
void del(int *arr,int size){
    int t=arr[size];
    arr[size]=arr[1];
    arr[1]=t;
    --size;
    int i=1;
    while(1){
        if(arr[i]<arr[2*i +1] && size>=2*i+1){
            t=arr[i];
            arr[i]=arr[2*i+1];
            arr[2*i+1]=t;
            i=2*i+1;
        }
        else if(arr[i]<arr[2*i] && size>=2*i){
            t=arr[i];
            arr[i]=arr[2*i];
            arr[2*i]=t;
            i=2*i;
        }
        else{
            break;
        }
        i=2*i;
    }
}  
//need to fix sort
void sort(int *arr,int size){
    for(int i=0;i<size;i++){
        del(arr,size-i);
    }
}
int main(){
    int n,k;
    cin>>n;
    int *arr= new int[n+1];
    for(int i=1;i<=n;i++){
        cin>>k;
        ins(arr,k,i-1);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    del(arr,n);
    for(int i=1;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Sorting\n";
    sort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}