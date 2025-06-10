#include<iostream>
#include<vector>
using namespace std;

void reverseVector(int n, vector <int> vec )
{
    
    cout<<"Enter the element in vector: \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        vec.push_back(val);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i];
    }
    cout<<endl;
    cout<<"after reversing the vector: "<<endl;
    int beg=0;
    int end=n-1;
    while(beg<=end)
    {
        swap(vec[beg],vec[end]);
        beg++;
        end--;
    }
    for (int val : vec)
    {
        cout<<val;
    }
    
}

int main()
{
    int n;
    cout<<"enter the lenght you want to give to the vector: \n";
    cin>>n;
    vector <int> vec;
    reverseVector(n,vec);
    return 0;
}