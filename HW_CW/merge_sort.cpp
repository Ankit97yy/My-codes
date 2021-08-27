#include <iostream>
using namespace std;
void merge(int arr[], int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = 0;
    int *temp = new int[ub - lb + 1];
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=ub){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(i=lb;i<=ub;i++){
        arr[i]=temp[i-lb];
    }
}

void merge_sort(int arr[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main()
{
    int arr[7] = {5, 11, 1, -8, 3, 2, -6};
    merge_sort(arr,0,6);
    cout<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}