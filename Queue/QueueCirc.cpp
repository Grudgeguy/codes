#include<iostream>
using namespace std;
class Queue{
    private :
        int size,front,rear;
        int *Q;
    public:
        Queue(int size);
        void enqueue(int el);
        int dequeue();
        bool isEmpty();
        bool isFull();
        void display();
};

Queue :: Queue(int size){
    this->size=size+1;
    Q = new int[size+1];
    front = rear = 0;
}

bool Queue :: isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}

bool Queue :: isFull(){
    if((rear + 1)%size == front ){
        return 1;
    }
    return 0;
}

void Queue :: enqueue(int el){
    if(!isFull()){
        rear=(rear+1)%size;
        Q[rear]=el;
    }
    else{
        cout<<"Stack Full"<<endl;
    }
}

void Queue :: display(){
    while(front != (rear)%size){
        front=(front+1)%size;
        cout<<Q[front]<<" "<<front<<" "<<endl;
    }
    cout<<endl;
}

int Queue :: dequeue(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        front=(front+1)%size;
    }
}
int main(){
    Queue q(5);
    q.enqueue(12);
    q.enqueue(23);
    q.enqueue(34);
    q.enqueue(12);
    q.enqueue(23);
    q.enqueue(34);
    q.display();
    // q.enqueue(456);
    // q.enqueue(15635);
    // q.enqueue(234);
}