#include<iostream>
using namespace std;
int main(){
  int arr[8]={4,6,7,8,12,15,16,32};
  int beg=0,end=7,val=32;
  while(beg<=end){
      int mid=(beg+end)/2;
      if(arr[mid]==val){ 
          cout<<"index= "<<mid<<endl;
          break;
      }
      else if(arr[mid]>val)  end=mid-1;
      else if(arr[mid]<val) beg=mid+1;
  }
}