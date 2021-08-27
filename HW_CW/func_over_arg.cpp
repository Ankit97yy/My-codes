#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int main(){
int x,y,z;
cout<<endl<<"enter two elements";
cin>>x>>y;
cout<<"sum of two num= "<<sum(x,y)<<endl;
cout<<"enter three nums";
cin>>x>>y>>z;
cout<<"sum of three num= "<<sum(x,y,z)<<endl;
}