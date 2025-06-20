// i this file of code i am going to slove the probem number 4 on the leetcode which is the median of two sorted arrays and this is the hard level problem in terms of difficulty and this question is also available on the platform leetcode(4) and other
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double median(vector<int> nums1, vector<int> nums2){
    vector<int> ans;
        double a;
        for(int val: nums1){
            ans.push_back(val);
        }
        for(int val: nums2){
            ans.push_back(val);
        }
        sort(ans.begin(), ans.end());
        int n=ans.size();
        if(n%2!=0){
            a=ans[n/2];
        }else{
            a=(ans[n/2-1]+ans[n/2])/2.0;
        }
        return a;
}

int main(){
    vector<int> arr1={1,3,7};
    vector<int> arr2={2,4,6,8,10};
    double ans=median(arr1, arr2);
    cout<<"The median of the two sorted arrays is: "<<ans<<endl;
}