#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int **p;
    // p=new int* [r];
    // for(int i=0;i<r;i++){
    //     p[i] = new int[c];
    // }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>p[i][j];
    //     }
    // }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<p[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    // METHOD 2 

    int *a[r];
    for(int i=0;i<r;i++){
        a[i]=new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}