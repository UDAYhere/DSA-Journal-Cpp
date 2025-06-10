#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// we are not using the kadane's algorithm here and solving its using the brute code the problem here is that the time complexity is O(n^2) here. to resolve this we will use kadane's algorithm
int maxSubarrSum(vector <int> vec)
{
    cout<<"your array is: \n";
    int maxVal=INT16_MIN;

    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        int currentValue=0;
        for (int j = i; j < vec.size(); j++)
        {
            currentValue += vec[j];
            maxVal= max(currentValue, maxVal);
        }
        

    }
    
    return maxVal;
}

// now i am going to build the function for kadane's algorithm to resolve the problem of time complexity so that the time complexity should be O(n).

int max_Subarr_Sum_Kadanes(vector <int> vec)
{
    cout<<"your array is: \n";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
    int maxVal=INT16_MIN;
    int currentVal=0;
    for(int val : vec) //for each loop
    {
        currentVal += val;
        maxVal=max(currentVal,maxVal);
        if(currentVal<0)
        {
            currentVal=0;
        }
    }

    return maxVal;
    
}


int main()
{
    vector <int> vec={1,5,-9,8,10,-2,5};
    int result=max_Subarr_Sum_Kadanes(vec);
    cout<<"The maximum subarray sum is: "<<result<<endl;
    
    return 0;
}