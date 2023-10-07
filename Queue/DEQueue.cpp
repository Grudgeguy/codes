#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
class Dequeue{
    private:
        node *front,*last;
    public:
        void enFront(int el);
        void enLast(int el);
        int deqFront();
        int deqLast();
        void isEmpty();
        void isFull();
        void display();
};

void Dequeue :: enFront(int el){
    if(is)
}