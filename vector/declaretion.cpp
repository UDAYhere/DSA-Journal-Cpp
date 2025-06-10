#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec={1,2,3}; 
    for(int a : vec)
    {
        cout<<a<<endl;
    }
       vec.push_back(8);

    cout<<vec.size()<<endl;
        vec.push_back(8);
            cout<<vec.size()<<endl;


    return 0;
}