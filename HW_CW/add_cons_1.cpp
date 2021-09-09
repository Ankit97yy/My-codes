#include<iostream>
using namespace std;
class calculate{
    private:
        int a,b;
    public:
        calculate(){
            cout<<"enter two numbers:";
            cin>>a>>b;
        }
        int addition(){
            return a+b;
        }
};
int main(){
calculate add;

cout<<"addition of the two number is "<<add.addition()<<endl;
}