#include<iostream>
using namespace std;
int main(){
int mat1[2][3]={
    {1,2,3},
    {2,4,1}
},mat2[3][2]={
    {4,5},
    {6,7},
    {1,2}
},mat_fin[2][2]={
    {0,0},
    {0,0}
};

for(int i=0;i<2;i++){ //for mat1 rows(i)
    for(int j=0;j<2;j++){ //for mat2 column(j)
        for(int k=0;k<3;k++){ //for mat2 row (k)
            mat_fin[i][j]+=mat2[k][j]*mat1[i][k];
        }
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<mat_fin[i][j]<<" ";
    }
    cout<<endl;
}

}