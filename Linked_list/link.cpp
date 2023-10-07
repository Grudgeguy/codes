#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;  
    node(int data){
        this -> data = data;
        next = NULL;
    }  
};
void print(node *head){
        node *temp=head;
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
int main(){ 
    node n1(3),n2(4);
    node head=n1;
    node *n3 = new node(11);
    n1.next=&n2;
    n2.next=n3;
    print(head);
    // print(head);
}