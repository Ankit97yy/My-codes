#include <iostream>
using namespace std;
bool issafe(int grid[9][9], int row,int col)
{   int i,j;
    for(int i=0;i<9;i++){
        if(grid[row][i]==1 || grid[i][col]==1) return false;
    }
    if(row>=col){
         i=row-col;
         j=0;
    }
    else{
         i=0;
         j=col-row;
    }
    for(;i<=8 && j<=8;i++,j++){
        if(grid[i][j]==1) return false;
    }
     for(int p=row,q=col;p<=8 && q>=0;p++,q--){
        if(grid[p][q]==1) return false;
    }
     for(int p=row,q=col;p>=0 && q<=8;p--,q++){
        if(grid[p][q]==1) return false;
    }
    return true;
}

bool n_queen(int grid[9][9], int row)
{
    if (row == 9)
        return true;
    for (int col = 0; col < 9; col++)
    {
        if (issafe(grid, row,col))
        {
            grid[row][col] = 1;
            if (n_queen(grid, row + 1))
                return true;
            grid[row][col] = 0;
        }
    }
    return false;
}

int main()
{
    int grid[9][9]={
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0}
    };
    n_queen(grid,0);

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}