#include<iostream>

using namespace std;

int main(){
    int arr[8]={3,8,22,9,1,7,2,8};
    for(int i=1;i<8;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<8;i++) cout<<arr[i]<<"\t";
}
