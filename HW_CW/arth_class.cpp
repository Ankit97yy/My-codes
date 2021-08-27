#include<iostream>
using namespace std;
class calculator{
    private:
        int x,y;
    public:
        void get_num();
        int add();
        int sub();
        int mul();
        float div();

};
void calculator:: get_num(){
            cout<<endl<<"enter two numbers ";
            cin>>x>>y;
        }

int calculator:: add() {return x+y;}
int calculator:: sub() {return x-y;}
int calculator:: mul() {return x*y;}
float calculator:: div() {return (float)x/y;}

int main(){
calculator calc;
calc.get_num();
cout<<"addition= "<<calc.add()<<endl;
cout<<"subtraction= "<<calc.sub()<<endl;
cout<<"multiplication= "<<calc.mul()<<endl;
cout<<"division= "<<calc.div()<<endl;
}