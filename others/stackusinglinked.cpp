#include<iostream>
using namespace std;
struct stack{
    int data;
    stack *link;
};
stack *top=NULL;

void insertion(){
    stack *temp;
    int num;
    temp=new stack();
    cout<<"enter a number"<<endl;
    cin>>num;
    temp->data=num;
    temp->link=top;
    top=temp;
}
void peek(){
    cout<<"top element= "<<top->data<<endl;
}
void pop(){
    stack *temp=top;
    cout<<"popped element is: "<<top->data;
    top=top->link;
    temp->link=NULL;
    free(temp);
}

void traverse(){
    stack *temp=top;
    cout<<endl<<"***STACK***"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    cout<<"***STACK***"<<endl;
}
void choice(int x){
    switch(x){
        case 1:
            insertion();
            traverse();
            break;
        case 2:
            pop();
            traverse();
            break;
        case 3:
            traverse();
            break;
        default:
            break;
    }
}
int main(){
    int n;
    while(n!=4){
        cout<<endl<<"enter your choice"<<endl;
        cin>>n;
        choice(n);
    }
}