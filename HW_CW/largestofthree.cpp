#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    cout<<"enter the third number"<<endl;
    cin>>num3;

    if(num1>num2){
        if(num1>num3) cout<<num1<<" is the largest number";
        else cout<<num3<<" is the largest number";
    }
    else{
        if(num2>num3) cout<<num2<<" is the largest number";
        else cout<<num3<<" is the largest number";
    }

}