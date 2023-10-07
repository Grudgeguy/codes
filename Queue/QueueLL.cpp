#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

class Queue{
    private:
        node *rear;
        node *front;
    public:;
        Queue();
        void enqueue(int el);
        int dequeue();
        bool isEmpty();
        bool isFull();
        void display();
};

Queue :: Queue(){
    rear = NULL;
    front = NULL;
}

void Queue :: enqueue(int el){
    node *temp = new node;
    if(rear==NULL){
        temp->data=el;
        temp->next=NULL;
        rear=temp;
        front=rear;
    }
    else{
        temp->data=el;
        temp->next=NULL;
        rear->next=temp;
        rear=temp;
    }
}

int Queue :: dequeue(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return -1;
    }
    else{
        int x;
        node *temp= new node;
        x=front->data;
        temp=front;
        front=front->next;
        delete temp;
        return x;
    }
}

bool Queue :: isEmpty(){
    if(front==NULL){
        return 1;
    }
    return 0;
}

bool Queue :: isFull(){
    node *t=new node;
    if(t==nullptr){
        return true;
    }
    return false;
}

void Queue :: display(){
    node *t = new node;
    t=front;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}

int main(){

    Queue q;
    cout<<q.isEmpty()<<endl;
    q.enqueue(23);
    q.enqueue(23232);
    q.enqueue(2323234);
    q.enqueue(2345);
    q.enqueue(2343);
    cout<<q.isEmpty()<<endl;
    q.display();
    cout<<"removed "<<q.dequeue()<<endl;
    q.display();
}