#include<iostream>
#define s cout<<"success\n";
using namespace std;
class LL{
    public:
    int data;
    LL* next;
    LL(){
        data=0;
        next=NULL;
    }
};
void atl(int a[][5],int size){
    LL **arr= new LL *[size+1];
    for(int i=1;i<=size;i++){
        arr[i] = new LL;
    }
    for(int i=1;i<=size;i++){
        arr[i]->data=i;
        arr[i]->next=NULL;
    }
    LL *arrow = new LL;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            if(a[i][j]==1){
                LL* temp = new LL;
                temp->data=j;
                temp->next=NULL;
                if(arr[i]->next==NULL){
                    arr[i]->next=temp;
                }
                else{
                    arrow->next = temp;
                }
                arrow=temp;
            }
        }
    }
    for(int i=1;i<=size;i++){
        while(arr[i]!=NULL){
            cout<<arr[i]->data<<" -> ";
            arr[i]=arr[i]->next;
        }
        cout<<endl;
    }
}
int main(){
    // int n;
    // cout<<"Enter number of vertices : ";
    // cin>>n;
    // int arr[n+1][n+1];
    // cout<<"Enter Adjacency Matrix : ";
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    int arr[5][5]={ {0,0,0,0,0},
                    {0,0,1,1,0},
                    {0,1,0,1,1},
                    {0,1,1,0,1},
                    {0,0,1,1,0}};
    atl(arr,4);
}