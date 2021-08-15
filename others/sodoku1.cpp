#include <iostream>
using namespace std;

bool issafe(int x, int y, int sod[9][9], int a)
{
    for (int i = 0; i < 9; i++)
    {
        if (sod[x][i] == a || sod[i][y] == a)
            return false;
    }
    int c, b;
    if (x>=0 && x <= 2)
    {
        if (y <= 2)
        {
            c = 0;
            b = 0;
        }
        else if (y >= 3 && y <= 5)
        {
            c = 0;
            b = 3;
        }
        else if(y>=6 && y<=8)
        {
            c = 0;
            b = 6;
        }
    }
    else if (x >= 3 && x <= 5)
    {
        if (y <= 2)
        {
            c = 3;
            b = 0;
        }
        else if (y >= 3 && y <= 5)
        {
            c = 3;
            b = 3;
        }
        else if(y>=6 && y<=8)
        {
            c = 3;
            b = 6;
        }
    }
    else if(x>=6 && x<=8)
    {
        if (y <= 2)
        {
            c = 6;
            b = 0;
        }
        else if (y >= 3 && y <= 5)
        {
            c = 6;
            b = 3;
        }
        else if (y>=6 && y<=8)
        {
            c = 6;
            b = 6;
        }
    }
    for (int i = c; i < c + 3; i++)
    {
        for (int j = b; j < b + 3; j++)
        {
            if (sod[i][j] == a)
                return false;
                
        }
    }
    return true;
}

bool sodoku_solver(int x, int y, int sod[9][9])
{
    int row = -1, col = -1;
    bool issolved = true;
    for (int i = x; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sod[i][j] == 0)
            {
                row = i;
                col = j;
                issolved = false;
                break;
            }
            
        }
        if (row == i)
            break;
    }
    if (issolved)
        return true;
    for (int i = 1; i <= 9; i++)
    {
        if (issafe(row, col, sod, i))
        {
            sod[row][col] = i;
            if (sodoku_solver(row, col, sod))
                return true;
            sod[row][col] = 0;
        }
    }
    return false;
}

int main()
{
    int sod[9][9] = {
         {4, 0, 0, 3, 0, 7, 0, 0, 6}, 
         {0, 3, 0, 4, 0, 5, 0, 0, 0}, 
         {0, 0, 0, 9, 0, 0, 0, 4, 0}, 
         {2, 8, 0, 0, 0, 0, 4, 0, 0}, 
         {0, 0, 5, 0, 0, 0, 0, 6, 0}, 
         {3, 4, 9, 0, 0, 0, 7, 0, 0}, 
         {9, 7, 0, 8, 2, 0, 0, 0, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {6, 2, 0, 0, 0, 0, 9, 8, 0} 
         };
    if(sodoku_solver(0, 0, sod)){
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sod[i][j] << " ";
        }
        cout << endl;
    }
    }
    else cout<<"solution doesnot exist";
}