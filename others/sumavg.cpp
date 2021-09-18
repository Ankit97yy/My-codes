#include<iostream>
using namespace std;
int main(){
int num,numbers,sum=0;
cout<<endl<<"how many numbers do you want to enter"<<endl;
cin>>num;
cout<<"enter the numbers: ";
for(int i=0;i<num;i++){
    cin>>numbers;
    sum+=numbers;
}
cout<<"sum= "<<sum<<endl;
cout<<"avg= "<<float(sum)/num<<endl;
return 0;
}