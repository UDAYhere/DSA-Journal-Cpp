#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int index = st - 1;
    int pivot = arr[end];

    for (int i = 0; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            index++;
            swap(arr[i], arr[index]);
        }
    }
    index++;
    swap(arr[end], arr[index]);
    return index;
}

void quicksort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int p = partition(arr, st, end);
        quicksort(arr,st,p-1);
        quicksort(arr,p+1,end);
    }
}
