#include<iostream>
using namespace std;
int main(){
int arr[6]={9,1,4,-7,-2,7};
cout<<endl<<"before sorting"<<endl;
for(int i=0;i<6;i++) cout<<arr[i]<<" ";
cout<<endl;
for(int i=0;i<5;i++){
    int check=1;
    for(int j=0;j<5-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            check=0;
        }
    }
    if(check) break;
}
cout<<endl;
cout<<"after sorting"<<endl;
for(int i=0;i<6;i++) cout<<arr[i]<<" ";
cout<<endl<<endl;
}