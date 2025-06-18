// in this code i am going to solve the leetcode question 198 house robber 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size() ==1)return  nums[0];
        int prev1 =0;
        int prev2 =0;
        for(int num: nums){
            int temp = prev1;
            prev1 = max(prev2+ num,prev1);
            prev2 = temp;

        }
        return prev1;

    }

int main(){
    vector<int> nums={2,1,1,2};
    int ans=rob(nums);
    cout<<ans<<endl;
    return 0;
}
