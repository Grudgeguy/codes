#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
class Stack{
    private:
        node* top;
    public:
        Stack();
        void push(int );
        friend int main();
        void peek();
        bool isEmpty();
        void disp();
        void pop();
        bool isFull();
};

class StkyQ{
    private:
        Stack sPush,sPop;
    public:
        void enqueue(int el);
        int dequeue();
        
};
Stack :: Stack(){
    top=NULL;
}
void Stack :: disp(){
    node *temp = new node;
    temp=top;
    if(isEmpty()==true){
        cout<<"Stack Empty\n";
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
void Stack :: push(int el){
    node* temp = new node;
    if(temp==NULL){
        cout<<"Out of Memory\n";
    }
    else{
        temp->data = el;
        temp->next=top;
        top=temp;
    }
}
void Stack :: peek(){
    if(isEmpty()){
        cout<<"Empty Stack\n";
    }
    else{
        cout<<top->data<<endl;
    }
}
bool Stack :: isEmpty(){
    if(top==NULL){
        return true;
    }
    return false;
}
void Stack :: pop(){
    if(isEmpty()){
        cout<<"Stack Underflow\n";
    }
    else{
        node *temp=new node;
        temp=top;
        top=top->next;
        delete temp;
    }
}
bool Stack :: isFull(){
    node *temp = new node;
    if(temp==NULL){
        return true;
    }
    free(temp);
    return false;
}