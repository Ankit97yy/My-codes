#include<iostream>
using namespace std;
class fibonacci{
    private:
        int f0,f1,fib=0;
    public:
        fibonacci(){
            f0=0;
            f1=1;
            fib=f0+f1;
        }

    void display(){
        cout<<f0<<endl;
    }
    void increment(){
        f0=f1;
        f1=fib;
        fib=f1+f0;
    }
};
int main(){
 fibonacci fib;
 for(int i=0;i<8;i++){
 fib.display();
 fib.increment();
 }
}