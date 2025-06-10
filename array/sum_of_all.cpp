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
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of array is: "<<sum<<endl;
    int product=1;
    for (int i = 0; i < n; i++)
    {
        product*=arr[i];
    }
    cout<<"Product of array is: "<<product<<endl;

    
    
    return 0;
}