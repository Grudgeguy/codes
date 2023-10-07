#include<iostream>
using namespace std;
class Queue{
    private:
        int size,front,rear;
        int *Q;
    public:
        Queue(int size);
        void enqueue(int el);
        void dequeue();
        bool isFull();
        bool isEmpty();
        void display();
};

Queue :: Queue(int size){
    this->size=size;
    front=rear=-1;
    Q = new int[size];
}

void Queue :: enqueue(int el){
    if(!isFull()){
        rear++;
        Q[rear]=el;
    }
    else{
        cout<<"Queue is Full\n";
    }
}

void Queue :: dequeue(){
    front++;
    Q[front]=0;
}

bool Queue :: isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}

bool Queue :: isFull(){
    if(rear==size-1){
        return true;
    }
    return false;
}

void Queue :: display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Queue q(5);
    cout<<q.isEmpty();
    q.enqueue(22);
    q.enqueue(24);
    q.enqueue(223);
    q.enqueue(225);
    q.enqueue(26532);
    cout<<endl;
    q.display();
    q.dequeue();
}