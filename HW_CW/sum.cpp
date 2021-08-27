#include<iostream>
using namespace std;

int main(){
    int n, nums,sum=0;
    float avg;
    cout<<"how many numbers you want to calculate: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter the numbers: ";
        cin>>nums;
        sum+=nums;
    }
    avg=(float)sum/n;
    cout<<"sum="<<sum<<endl;
    cout<<"avg="<<avg<<endl;
}