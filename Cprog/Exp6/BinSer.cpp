#include<iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n],li=0,ui=n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=(li+ui)/2;
    int c=0,f=0;
    cout<<"Enter element to be searched : ";
    cin>>key;
    while(1){
        if(arr[m]==key){
            cout<<"Found at index : "<<(li+ui)/2;
            break;
        }
        else if (arr[m]<key){
            li=m+1;
            m=(li+ui)/2;
        }
        else if (arr[(li+ui)/2]>key){
            ui=m-1;
            m=(li+ui)/2;
        }
        if(li==ui && f==1){
            cout<<"Element not found :=( ";
            break;
        }
        c++;
    }
    cout<<"\nFound in "<<c<< " Iterations";
}