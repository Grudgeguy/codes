#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        arr[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]>1){
            cout<<(char)(97+i)<<" is  a duplicate\n";
        }
    }
}