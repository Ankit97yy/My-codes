#include <iostream>
using namespace std;
int ways = 0, m = 3;
int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 1}};
void find_path(int x, int y, int a, int b)
{ //a,b are size of grid and that's where the cheese is. (x,y)=mouse position

    if (x > a || y > b || x < 1 || y < 1)
        return; //checking for boundaries
    else if (x == a && y == b)
    {
        ways++;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl << endl;
        return;
    }
    else if (arr[x-1][y-1] == 1)
        return; //checking whether previously the rat had crossed this path or not
    arr[x-1][y-1] = 1;

    find_path(x - 1, y, a, b);
    find_path(x + 1, y, a, b);
    find_path(x, y - 1, a, b);
    find_path(x, y + 1, a, b);

    arr[x-1][y-1] = 0;
}
int main()
{
    cout << endl;
    find_path(1, 1, m, m);
    cout << "ways= " << ways;
    cout << endl;
}