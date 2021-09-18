#include <iostream>

using namespace std;
int n = 5;

int partion(int arr[], int lb, int ub)
{
    int left = lb, right = ub;
    int pivot = arr[lb];
    // cout<<"lb in part="<<lb<<endl;

    while (left < right)
    {
        while (arr[left] <= pivot)
            left++;
        while (pivot < arr[right])
            right--;
        if (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    int temp = arr[lb];
    arr[lb] = arr[right];
    arr[right] = temp;
    //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return right;
}
void quicksort(int arr[], int lb, int ub)
{
    // cout<<"lb in qs="<<lb<<endl;
    int loc;
    if (lb < ub)
    {   
        loc = partion(arr, lb, ub);
        //cout<<"lb="<<lb<<" loc="<<loc<<endl;
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}

int main()
{

    int arr[] = {-5,1,3, 55, 2};
    cout << "before quick sort" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    quicksort(arr, 0, n - 1);
    cout << "after quick sort" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout<<endl;
}