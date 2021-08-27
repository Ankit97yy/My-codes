#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"enter the no. of the week: ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"SUNDAY";
        break;
    case 2:
        cout<<"MONDAY";
        break;
    case 3:
        cout<<"TUESDAY";
        break;
     case 4:
        cout<<"WEDNESDAY";
        break;
    case 5:
        cout<<"THURSDAY";
        break;
    case 6:
        cout<<"FRIDAY";
        break;

    case 7:
        cout<<"SATURDAY";
        break;

    default:
        cout<<"invalid input"<<endl;
        break;
    }
}