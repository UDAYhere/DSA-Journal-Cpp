#include<iostream>
#include<vector>
using namespace std;

void pairSum(int target, vector <int> vec)
{
    // vector <int> vec;
    vector <int> ans;

    for(int i=0; i<vec.size(); i++)
    {
        for (int j = i+1; j < vec.size(); j++)
        {
            if(vec[i]+vec[j]== target)
            {
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
                cout<<"your pair is:";
                for(int val : ans)
                {
                    cout<<val<<" ";
                }
                break;
            }
        }
        
    }
    
    

}

int main()
{
    vector <int> vec={2,7,11,15,16};
    cout<<"enter the target value which you want pair of from given numbers: "<<endl;
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
    int target;
    cout<<"target: ";
    cin>>target;

    pairSum(target,vec);

    
    return 0;
}