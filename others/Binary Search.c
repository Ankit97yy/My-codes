#include<stdio.h>

#include<conio.h>

//BINARY SEARCH NOV-2021

void main(){

    int size=6,start=0,end=size-1;

    int arr[]={1,2,4,7,8,9};

    int key=10;

    int mid=(start+end)/2;// START END IS THE IS INDEX

    while(1){

    if(arr[mid]==key){

        printf("the key is at index=%d",mid);

        break;

    }

    else if(start>end){

       printf("key is not found");

       break;

    }

    else if(arr[mid]>key){

        end=mid-1;

        mid=(start+end)/2;

    }

    else if(arr[mid]<key){

        start=mid+1;

        mid=(start+end)/2;

    }

    

    }

}
