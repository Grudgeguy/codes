#include<iostream>
#define s cout<<"success\n";
using namespace std;

struct treeNode{
    int data;
    treeNode *lchild,*rchild;
};

struct node{
    treeNode *data;
    node* next;
};

class Queue{
    private:
        node *front,*rear;
    public:
        Queue();    
        void enqueue(treeNode* el);
        bool dequeue();
        bool isEmpty();
        bool isFull(); 
        void display();
        treeNode* qFront();
};

Queue :: Queue(){
    front=NULL;
    rear=NULL;
}

treeNode* Queue :: qFront(){
    return front->data;
}

void Queue :: enqueue(treeNode* el){
    node *temp = new node;
    if(front == NULL){
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

void Queue :: display(){
    node * temp = new node;
    temp= front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool Queue :: isEmpty(){
    if(front==NULL){
        return 1;
    }
    return 0;
}

bool Queue :: isFull(){
    node *t= new node;
    if(t==NULL){
        return 1;
    }
    return 0;
}

bool Queue :: dequeue(){
    node *temp = new node;
    if(!isEmpty()){
        temp = front ;
        front=front->next;
        delete temp;
        return 1;
    }
    else{
        return 0;
    }
}

class Tree{
    private:
        Queue q;
    public:
        Tree();
        void insert();
};

Tree :: Tree(){
    treeNode *root;
    root->lchild=NULL;
    root->rchild=NULL;
    cout<<q.isEmpty()<<endl;
    q.enqueue(root);
    cout<<q.isEmpty()<<endl;
}

void Tree :: insert(){
    s
    treeNode* temp= new treeNode;
    temp = q.qFront();
    int k;
    cin>>k;
    temp->data=k;
    while(!q.isEmpty()){
        temp->lchild = new treeNode;
        temp->rchild = new treeNode;
        cout<<"Enter Left Child : ";
        cin>>k;
        if(k!=-1){
            temp->lchild->data=k;
            q.enqueue(temp->lchild);
        }
        else{
            temp->lchild=NULL;
        }
        if(k!=-1){
            temp->rchild->data=k;
            q.enqueue(temp->rchild);
        }
        else{
            temp->rchild=NULL;
        }
        q.dequeue();
    }
}

int main(){
    
    Tree t;
    t.insert();

}