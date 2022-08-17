#include<stdio.h>
#include<string.h>
int main(){
    int at[10],bt[10],tat[10],wt[10],ct[10],temp=0,d,tt,n,min;
    printf("enter number of process");
    scanf("%d",&n);
    printf("enter arribal time");
    for(int i=0;i<n;i++){
        scanf("%d\n",&at[i]);
    }
    printf("enter burst time");
    for(int i=0;i<n;i++){
        scanf("%d\n",&bt[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(bt[i]>bt[i+1]){
                temp=bt[i+1];
                bt[i+1]=bt[i];
                bt[i]=temp;
                temp=at[i+1];
                at[i+1]=at[i];
                at[i]=temp;
            }
        }
    }
    
    min=at[0];
    for(int i=0;i<n;i++){
        if(min>at[i]){
            min=at[i];
            d=i;
        }
    }
    tt=min;
    ct[d]=tt+bt[d];
    tt=ct[d];
    for(int i=0;i<n;i++){
        if(at[i]!=min){
            ct[i]=at[i]+tt;
            tt=ct[i];
        }
    }
    for(int i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }
}