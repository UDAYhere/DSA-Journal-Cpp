#include <iostream>
using namespace std;
int main()
{
    int a[15];
    cout << "enter the size:\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<"enter element to insert";
    int item;
    cin>>item;
    cout<<"enter the index";
    int k;
    cin>>k;
    int i=n-1;
    for(i=n;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=item;
    n=n+1;
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}
