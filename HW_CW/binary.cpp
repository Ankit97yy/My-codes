#include<iostream>

using namespace std;

int main(){
    int arr[7]={1,4,5,7,8,12,14};
    int start=0,end=6,mid=0,val;
    cout<<endl<<"enter the number you want to search"<<endl<<endl;
    cin>>val;
    mid=(start+end)/2;
    while(start<=end){
         if(arr[mid]>val) end=mid-1;

         else start=mid+1;
         mid=(start+end)/2;
    }
     if(arr[mid]==val)
                cout<<"number is found at index "<<mid<<endl;
    else cout<<"doesnt exist";


    
}
