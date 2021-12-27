#include<iostream>
using namespace std;
int front=-1,rear=-1;
bool rpos=false,frpos=false;
bool is_full(int arr[]){
    if(front==-1 && rear==4) return true;
    else if(rpos) return true;
    return false;
}
bool is_empt(int arr[]){
    if(front==-1 && rear==-1) return true;
    else if(frpos) return true;
    else return false;
}
void push(int arr[]){
    frpos=false;
    if(is_full(arr)) cout<<"***Queue is full***"<<endl;
    else{
    cout<<"enter a number";
    int num;
    cin>>num;
    rear++;
    rear=rear%5;
    if(rear==front) rpos=true;
    arr[rear]=num;
    }
}
void del(int arr[]){
    rpos=false;
    if(is_empt(arr)) cout<<"***Queue is empty***"<<endl;
    else {
    front++;
    front=front%5;
    if(front==rear) frpos=true;
    arr[front]=0;
    }
}
void display(int arr[]){
    int i;
    cout<<endl;
    if(is_empt(arr)) return;
    cout<<"***Queue***=";
    if(rear==front && rear!=-1 || rear==4 && front==-1){
        i=(front+1)%5;
        for(int j=0;j<5;j++){
            cout<<arr[i]<<" ";
            i=(i+1)%5;
        }
    }
    else{
    if (front==-1) i=0;
    else i=(front+1)%5;
    for(;i!=(rear+1)%5;i=(i+1)%5){
        cout<<arr[i]<<" ";
    }
    }
    cout<<endl;
}
void choice(int x,int arr[]){
    switch (x)
    {
    case 1:
        push(arr);
        display(arr);
        break;
    case 2:
        del(arr);
        display(arr);
        break;
    case 3:
        display(arr);
        break;
    default:
        break;
    }
}

int main(){
int arr[5],x=9;
while(x!=4){
	cout<<"\n\nenter 1 to push\nenter 2 to delete\nenter 3 to display\nenter 4 to quit\n\n";
    cout<<"enter your choice: "<<endl;
    cin>>x;
    choice(x,arr);
}

}
