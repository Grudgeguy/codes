#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top=-1;
    int *s;
};
void create(Stack *s1){
    cout<<"Enter Stack Size : ";
    cin>>(*s1).size;
    int *sc= new int[s1->size];
    s1->s=sc; 
}
bool isFull(Stack s1){
    if(s1.top==s1.size-1){
        return 1;
    }
    return 0;
}
bool isEmpty(Stack s1){
    if(s1.top==-1){
        return 1;
    }
    return 0;
}
bool push(Stack *s1,int el){
    if(!isFull(*s1)){
        s1->top++;
        s1->s[s1->top]=el;
        return 1;
    }
    cout<<"Stack Overflow\n";
    return 0;
}
void peek(Stack s1){
    cout<<s1.s[s1.top]<<endl;
}
void Display(Stack s1){
    for(int i=0;i<=s1.top;i++){
        cout<<s1.s[i]<<" ";
    }
}
void pop(Stack *s1){
    if(isEmpty(*s1)){
        cout<<"Stack Underflow\n";
    }
    else{
        s1->top--;
    }
}
int main(){
    Stack s1;
    create(&s1);
    while(!isFull(s1)){
        int el;
        cin>>el;
        push(&s1,el);
        // peek(s1);
    }
    pop(&s1);
    Display(s1);
}