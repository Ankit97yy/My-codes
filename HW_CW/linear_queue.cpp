#include <iostream>
using namespace std;
#define max 5
int front = -1, rear = -1;
bool full(int arr[]){
    if(rear== max-1) return true;
    else return false;

}
bool empty(int arr[]){
    if(front==rear) return true;
    else return false;
}
void insert(int arr[])
{   if(full(arr)) cout<<endl<<"**Queue is full***"<<endl;
    else{
    cout << "enter the number: " << endl;
    int num;
    cin >> num;
    rear++;
    arr[rear] = num;
    }
}

void del(int arr[])
{   if(!empty(arr)) front++;
    else cout<<endl<<"***Queue is empty***"<<endl;

}

void display(int arr[])
{   int i;
    if(front==-1) i=0;
    else i=front+1;
    cout<<endl<<"Queue= ";
    for (;i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void choice(int x, int arr[])
{
    switch (x)
    {
    case 1:
        insert(arr);
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
int main()
{   int num,arr[max];
    cout << "enter 1 to insert" << endl
         << "enter 2 to delete" << endl
         << "enter 3 to display" << endl
         << "enter 4 to quit" <<endl;

    while(num!=4){
        cout<<endl<<"enter your choice"<<endl;
        cin>>num;
        choice(num,arr);
    }

}