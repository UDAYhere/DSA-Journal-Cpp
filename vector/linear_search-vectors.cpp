#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many elements you want to enter in your vector: \n";
    cin>>n;
    vector <int> vec(n);

    cout<<"Enter the element for vector\n";
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    cout<<"enter the elment you want to search from the vector\n";
    int target;
    cin>>target;
    for (int i = 0; i < n; i++)
    {
        if(vec[i]==target)
        {
            cout<<"The element is found at index: "<< i <<" and the element is: "<<vec[i]<<endl;
            break;
        }
        
    }
    vec.push_back(88);
    for(int value : vec)
    {
        cout<<value<<endl;
    }

    cout<<vec.size();
    

    return 0;
}