#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> bubble_sort(vector<int> v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]) swap(v[j], v[j+1]);
        }
    }
    return v;
} 

int main(){
    vector<int> vec={454,85,789,18,22,85,6,47,4,84,81,85,785,82,84,85,78,4,78,214};
    vector<int> ans=bubble_sort(vec);
    for(int val: ans){
        cout<<val<<" ";
    }
}
