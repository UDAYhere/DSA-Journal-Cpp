#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int beg=0, end=sizeof(a)/ sizeof(a[0]), mid=(beg+end)/2;
    cout<<"enter the element you want to search";
    int item;
    cin >> item;

    if(a[mid]==item)
    {
        beg=mid;
        end=end-mid;
        cout<<beg<<end;
    }
    
    
    return 0;
}