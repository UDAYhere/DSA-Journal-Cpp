#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout << "Enter how many element you want to enter in array: " << endl;
    cin >> n;
    cout << "Now enter the elements to be stored in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int smallest = INT16_MAX;
    int samllestIndex = 0;
    int largest = INT16_MIN;
    int largestIndex = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < smallest)
        {
            smallest = arr[j];
            samllestIndex = j;
        }
        if (arr[j] > largest)
        {
            largest = arr[j];
            largestIndex = j;
        }

    }
            swap(arr[samllestIndex],arr[largestIndex]);


    cout << "Smallest value: " << smallest << " Stored at index: " << samllestIndex << endl;
    cout << "Largest value: " << largest << " Stored at index: " << largestIndex << endl;
    cout<<"But after swapping the values the array should look like: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}