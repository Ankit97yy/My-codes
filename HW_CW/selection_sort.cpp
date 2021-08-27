#include <iostream>
using namespace std;
int main()
{
    int min, pos;
    int arr[7];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        min = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
          if (min != i)
            {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
    }
    cout << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
