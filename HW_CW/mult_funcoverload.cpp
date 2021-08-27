#include<iostream>
using namespace std;
int product(int x,int y){
    return x*y;
}
int product(int x,int y,int z){
    return x*y*z;
}
int main(){
    int x,y,z;
    cout<<endl<<"enter two numbers: ";
    cin>>x>>y;
    cout<<"product of two integers="<<product(x,y)<<endl;
    cout<<endl<<"enter three numbers: ";
    cin>>x>>y>>z;
    cout<<"product of three integers="<<product(x,y,z)<<endl;


}