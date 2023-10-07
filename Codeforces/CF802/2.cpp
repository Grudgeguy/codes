#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int s,n;
        cin>>s>>n;
        switch(s){
            case 1:{
                if(5-n<1){
                    cout<<11-n<<"\n";
                }
                else{
                    cout<<5-n<<"\n";
                }
                break;
            }
            case 2:{
                if(55-n<10){
                    cout<<111-n<<"\n";
                }
                else{
                    cout<<55-n<<"\n";
                }
                break;
            }
            case 3:{
                
                if(555-n<100){
                    cout<<1111-n<<"\n";
                }
                else{
                    cout<<555-n<<"\n";
                }
                break;
            }
            case 4:{
                
                if(5555-n<1000){
                    cout<<11111-n<<"\n";
                }
                else{
                    cout<<5555-n<<"\n";
                }
                break;
            }
            case 5:{
                
                if(55555-n<10000){
                    cout<<111111-n<<"\n";
                }
                else{
                    cout<<55555-n<<"\n";
                }
                break;
            }
                d
        }
    }
}