#include <iostream>
using namespace std;
int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
int find_path(int x, int y, int a, int b)
{ //a,b are size of grid and that's where the cheese is. (x,y)=mouse position

    if (x > a || y > b || x < 1 || y < 1)
        return 0; //checking for boundaries
    else if (x == a && y == b)//checking if the rat has arrived at cheese
    {
        for (int i = 0; i < 3; i++)//clearing the obstacles for other paths after finding a path to cheese
        { 
            for (int j = 3; j < 3; j++)
            {
                if (arr[i][j] == 1)
                    arr[i][j] = 0;
            }
        }
        return 1;
    }
    else if (arr[x][y] == 1)
        return 0; //checking whether previously the rat had crossed this path or not
    arr[x][y] = 1;

    return find_path(x - 1, y, a, b) + find_path(x + 1, y, a, b) + find_path(x, y - 1, a, b) + find_path(x, y + 1, a, b);
}
int main()
{
    cout << endl;
    int ways = find_path(1, 1, 3, 3);
    cout << "ways= " << ways;
    cout << endl;
}