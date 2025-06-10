#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec={1,2,3,4};
    vector <int> ansVec;
    
    for (int i = 0; i < vec.size(); i++)
    {
        int val=1;
        for (int j = i+1; j < vec.size(); j++)
        {       
            if(i!=j)
            {
                val*=vec[j];
            }
        }
        ansVec.push_back(val);
        
    }
    
    for(int a:ansVec)
    {
        cout<<a<<" ";
    }

}