#include<iostream>
using namespace std;
int main(){
int arr[6]={10,1,0,-5,15,81};
for(int i=0;i<5;i++){
    int flag=1;
    for(int j=0;j<5-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=0;
        }
    }
    if(flag) break;
}
cout<<endl;
for(int i=0;i<6;i++) cout<<arr[i]<<" ";
cout<<endl<<endl;
}