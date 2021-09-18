#include<iostream>
using namespace std;
int main(){
int arr[3][3]={
    {2,3,4},
    {3,6,1},
    {8,6,2}
};
int arr2[3][3]={
    {5,3,1},
    {5,1,1},
    {9,1,6}
};
int add[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        add[i][j]=arr[i][j]+arr2[i][j];
    }
    cout<<endl;
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<add[i][j]<<" ";
    }
    cout<<endl;
}
}