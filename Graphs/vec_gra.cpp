#include<vector>
#include<iostream>
using namespace std;
int main(){
    // int arr[5][5]={ {0,0,0,0,0},
    //                 {0,0,1,1,0},
    //                 {0,1,0,1,1},
    //                 {0,1,1,0,1},
    //                 {0,0,1,1,0}};
    // for(int i=1;i<5;i++){
    // // v.push_back(vector<int> ());    
    //     for(int j=1;j<5;j++){
    //         if(arr[i][j]==1){
    //             v[i]
    //             v.at(i).push_back(j);
    //         }
    //     }
    //     cout<<v.size()<<endl;
    //     v.push_back(v1);
    //     v1.clear();
    // }
    // for(int i=1;i<5;i++){
    //     cout<<i<<" -> ";
    //     for(int j=1;j<v[i].size();j++){
    //         cout<<v[i][j]<<" -> ";
    //     }
    //     cout<<endl;
    // }



    int n;
    vector<vector<int>> v;
    vector <int > v1;
    cout<<"Enter size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        v.push_back(vector<int> ());
        cout<<"Enter connections for vertex "<<i<<" :\n";
        int k;
        cin>>k;
        while(k!=-1){
            v1.push_back(k);
            cin>>k;
        }
        v.push_back(v1);
        v1.clear();
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}