// so in this file : i am basically clearing my concpet regarding the unordered map and sets and the main part these things and topcis comes under the hashing

//->📌 Definition: Hashing is a technique to map data to a fixed-size value (called a hash code), which is used to index into a hash table for fast access, insertion, and deletion.

/*🗂️ 2. Hash Table:
 A data structure that stores key-value pairs.

C++ STL: unordered_map, unordered_set*/

/*⏱️ 5. Time Complexity:
Operation	Average Case	Worst Case (collisions)
Insert	         O(1)	       O(n)
Search	         O(1)          O(n)
Delete	         O(1)	       O(n)*/

// rest info is in the pdf of hashing 



#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>

using namespace std;

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end()); 
        unordered_set<int> result;

        for (int x : nums2) {
            if (s.count(x)) {
                result.insert(x); 
            }
        }

        return vector<int> (result.begin(), result.end());
    // return res;

    }

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int sec=target-first;
            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }

            m[first]=i;
        }
        return ans;
    }

int main(){
    vector<int> arr={0,2,5,8,7,9,3,6,4,5,8,9};
    vector<int> arr1={0,2,5,8,7,9,3,6,4,5,8,9};
    vector<int> ans=intersection(arr, arr1);
    vector<int> ans1=twoSum(arr, 10);
    
    for(int val: ans1) {cout<<val<<" ";}
    return 0;
}