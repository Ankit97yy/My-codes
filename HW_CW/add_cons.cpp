#include<iostream>
using namespace std;
class calculate{
    private:
        int a,b;
    public:
        calculate(int x,int y){
            a=x;
            b=y;
        }
        int addition(){
            return a+b;
        }
};
int main(){
int num1,num2;
cout<<"enter two numbers"<<endl;
cin>>num1>>num2;

calculate add(num1,num2);

cout<<"addition of the two number is "<<add.addition()<<endl;
}