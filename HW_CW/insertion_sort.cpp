#include <iostream>
using namespace std;
int main()
{
    int arr[7] = { 2, 0,1, 5, 11, 8, 9};
    for (int i = 1; i < 7; i++)
    {
        int j = i - 1, temp = arr[i];
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
