#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter how many element you want to enter in array: "<<endl;
    cin>>n;
    cout<<"Now enter the elements to be stored in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Now your array is going to be reversed"<<endl;
    cout<<"Before reversing: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int start=0; 
    int end=n-1;

    cout<<"After reversing"<<endl;

    while(start<=end)
    {
        swap(arr[start], arr[end]);//swap function is used to swap to values between them
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}