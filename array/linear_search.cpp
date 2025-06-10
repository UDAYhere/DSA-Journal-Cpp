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
    cout<<"Enter the element you want to search from the array: "<<endl;
    int target;
    cin>>target;
    int index;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]==target)
        {
            index=j;
            break;
        }
        else
        {
            index=-1;
        }
    }
    cout<<"The element you are searching for is stored at index: "<<index<<endl;
    
    return 0; 
}