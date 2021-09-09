#include <iostream>
using namespace std;
int p = -1;
int arr[5] = {0, 0, 0, 0, 0};
bool isfull(int arr[]){
    for(int i=0;i<5;i++){
        if(arr[i]==0) return false;
    }
    return true;
}
void push(int arr[])
{   if(isfull(arr)) cout<<"stack is full"<<endl;
    else {
    int num;
    cout << endl
         << "enter a number" << endl;
    cin >> num;
    p++;
    arr[p] = num;
    }
}

bool isempty(int arr[]){
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != 0)
            return false;
    }
    
    return true;
}

void pop(int arr[])
{
    if (!isempty(arr))
    {
        cout << "popping....." << endl;
        arr[p] = 0;
        p--;
    }
    else
        cout << "stack is empty. Nothing to pop"<<endl;
}
void peek(int arr[])
{
    cout << "top value= " << arr[p] << endl;
    ;
}
void display(int arr[])
{
    cout << "stack= ";
    for (int i = 0; i <= p; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

void choice(int x)
{
    switch (x)
    {
    case 1:
        push(arr);
        display(arr);
        break;
    case 2:
        pop(arr);
        display(arr);
        break;
    case 3:
        peek(arr);
        break;
    case 4:
        display(arr);
        break;
    default:
        break;
    }
}

int main()
{
    int arr[5] = {0, 0, 0, 0, 0};
    cout << "enter 1 to push data" << endl
         << "enter 2 to pop" << endl
         << "enter 3 to peek" << endl
         << "enter 4 to print the stack" << endl
         << "enter 9 to quit" << endl;
    int c;
    while(c!=9){
        cout<<endl<<"enter your choice"<<endl;
        cin>>c;
        choice(c);
    }
}