#include<iostream>
using namespace std;

int main(){
    int arr[4],j=0,val;
    cout<<"enter the values"<<endl;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"enter the number to be searched ";
    cin>>val;
    for(j=0;j<4;j++){
        if(arr[j]==val){
            cout<<"the value is found at index "<<j<<endl;
            break;
        }
    }
    if(j==4) cout<<"value is not in the array"<<endl;
    
}