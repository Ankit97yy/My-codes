#include<iostream>

using namespace std;

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"enter the value at index: "<<i<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}