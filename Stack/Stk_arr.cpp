#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int data;
        int top=-1;
        int cap=8;
        int *s= new int[cap];
        Stack(int el){
            if(isEmpty()){
                s[top+1]=el;
            }
            else{
                cap*=2;
                int *st = new int[cap];
                for
            }
        }
        bool isEmpty(){
            if(top+1==cap){
                return false;
            }
            return true;
        }
};
int main(){
    Stack s;
}