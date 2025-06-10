#include <iostream>
using namespace std;
int main()
{
    int a[15];
    cout << "enter the size:\n";
    int n;
    cin>>n;
    cout<<"enter the element for an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"enter the element you want to search\n";
    int searchElement;
    cin>>searchElement;

    for(int j=0; j<n; j++)
    {
        if(a[j]==searchElement)
        {
            cout<<a[j]<<endl;
            break;
        }
    }
    
}
