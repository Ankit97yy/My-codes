#include <iostream>
using namespace std;
int arr[9][9],count=0;
void count_n(int sod[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(sod[i][j]==0) count++;
        }
    }
}
void insert(int x, int y, int sod[9][9])
{
    int num=0, possible = 0,flag=9;
    if (sod[x][y] == 0)
    {
        for (int i = 1; i <= 9; i++)
        {
            possible++;
            for (int j = 0; j < 9; j++)
            {
                if (sod[x][j] == i || sod[j][y] == i)
                {
                    possible--;
                    break;
                }
                else if (j == 8 && sod[x][j] != i)
                    num = i;
            }
            if (possible > 1)
                break;
        }
        if (possible == 1)
        {
            int a, b;
            if (x <= 2)
            {
                if (y <= 2)
                {
                    a = 0;
                    b = 0;
                }
                else if (y >= 3 && y <= 5)
                {
                    a = 0;
                    b = 3;
                }
                else
                {
                    a = 0;
                    b = 6;
                }
            }
            else if (x >= 3 && y <= 5)
            {
                if (y <= 2)
                {
                    a = 3;
                    b = 0;
                }
                else if (y >= 3 && y <= 5)
                {
                    a = 3;
                    b = 3;
                }
                else
                {
                    a = 3;
                    b = 6;
                }
            }
            else
            {
                if (y <= 2)
                {
                    a = 6;
                    b = 0;
                }
                else if (y >= 3 && y <= 5)
                {
                    a = 6;
                    b = 3;
                }
                else
                {
                    a = 6;
                    b = 6;
                }
            }
            for (int i = a; i < a + 3; i++)
            {
                for (int j = b; j < b + 3; j++)
                {
                    if (sod[a][b] == num)
                        flag=10;
                        break;
                }
                if(flag=10) break;
            }
            if(flag==10) return;
            sod[x][y]=num;
            count--;
            return;
        }
        else{
            return;
        }
    
    }
    else{
        return;
    }
}

void traverse(int x, int y, int sod[9][9])
{
    if (x > 8 || x < 0 || y < 0 || y > 8)
    {
        return;
    }
    else if (arr[x][y] == 1)
        return;
    else if(count<1) return;
    insert(x, y, sod);

    arr[x][y] = 1;

    traverse(x + 1, y, sod);
    traverse(x, y + 1, sod);
    traverse(x - 1, y, sod);
    traverse(x, y - 1, sod);
    insert(x, y, sod);
    arr[x][y]=0;
    
}

int main()
{
    int sod[9][9]={
        {0,0,4,9,0,6,2,7,1},
        {9,6,7,8,1,2,4,0,5},
        {2,0,0,0,3,4,6,9,8},
        {0,8,0,0,9,0,7,4,0},
        {6,0,0,0,4,8,0,2,3},
        {4,1,3,2,0,7,5,0,9},
        {7,0,5,3,8,0,9,6,4},
        {0,9,6,4,2,5,0,1,0},
        {1,4,8,6,7,9,3,5,0}
    };
    count_n(sod);
    traverse(0,0,sod);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sod[i][j]<<" ";
        }
        cout<<endl;
    }
}