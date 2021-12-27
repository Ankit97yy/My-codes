#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *top;
void push(){
  node *temp;
  temp=new node();
  cout<<"enter the data: "<<endl;
  cin>>temp->data;
  temp->link=top;
  top=temp;
}
void pop(){
    if(top!=NULL){
    node *temp;
    temp=top;
    top=temp->link;
    cout<<"popped data is"<<temp->data<<endl;
    temp->link=NULL;
    free(temp);
    }
    else{
        cout<<"Stack underflow\n";
    }
    
}
void seek(){
    if(top!=NULL){
    cout<<"top element is"<< top->data;}
    else{
        cout<<"no elemsts\n";
    }
}
void travers(){
    struct node *temp;
    temp=top;
    cout<<"\n **STACK*** \n";
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    cout<<"**STACK***\n";
}
void switchcase(int x){
    switch (x){
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        seek();
        break;
    case 4:
        travers();
        break;
    default:
        break;
    }
}
int main(){
    int num;
    while(num!=5){
    cout<<"Enter 1 to push\nEnter 2 to pop\nEnter 3 to seek\nEnter 4 to traverse\nEnter 5 to exit\n"<<endl;
    cin>>num;
    switchcase(num);
    }
}


