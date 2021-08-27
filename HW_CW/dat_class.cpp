#include<iostream>
using namespace std;
class calander {
    private:
        int date,month,year;

    public:
        void getinfo(){
            cout<<"enter day,month and year"<<endl;
            cin>>date>>month>>year;
        }

        void showinfo(){
            cout<<"date= "<<date<<endl<<"month="<<month<<endl<<"year="<<year<<endl;
        }

};
int main(){
calander date;
date.getinfo();
date.showinfo();
}