#include<iostream>


using namespace std;


int main(){
    int mat1[2][2],mat2[2][2],sum_mat[2][2];
    cout<<"enter elements in mat1"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"enter elements in mat2"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int sum=0;
            sum=mat1[i][j]+mat2[i][j];
            sum_mat[i][j]=sum;
        }
    }
    cout<<"summation of the the matrix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<sum_mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}
