#include <iostream>

using namespace std;
int n = 7;

int partion(int arr[], int lb, int ub)
{
    int start = lb + 1, end = ub;
    int pivot = arr[lb];
    // cout<<"lb in part="<<lb<<endl;

    while (start < end)
    {
        while (arr[start] <= pivot)
            start++;
            cout<<"start="<<start<<" ";
        while (pivot < arr[end])
            end--;
        if (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    int temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return end;
}
void quicksort(int arr[], int lb, int ub)
{
    // cout<<"lb in qs="<<lb<<endl;
    int loc;
    if (lb < ub)
    {   
        loc = partion(arr, lb, ub);
        cout<<"lb="<<lb<<" loc="<<loc<<endl;
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}

int main()
{

    int arr[] = {3, 5, 2, 13, 12,-9,1};
    cout << "before sorting" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    quicksort(arr, 0, n - 1);
    cout << "after sorting" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout<<endl;
}