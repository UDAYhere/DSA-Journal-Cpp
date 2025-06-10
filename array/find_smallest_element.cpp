#include<iostream>
#include<limits>
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
    int smallest = INT16_MAX; //INT_MAX is used to give maximum value of integer and INT_MIN is used to give minimum value 
    int samllestIndex=0;
    int largest = INT16_MIN;
    int largestIndex=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]<smallest)
        {
            smallest=arr[j];
            samllestIndex=j;
        }
        if(arr[j]>largest)
        {
            largest=arr[j];
            largestIndex=j;
        }
    }
    cout<<"Smallest value: "<<smallest<<" Stored at index: " << samllestIndex <<endl;
    cout<<"Largest value: "<<largest<<" Stored at index: " << largestIndex <<endl;
    
    

    return 0;
}