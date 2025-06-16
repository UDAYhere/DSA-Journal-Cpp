//in this code we are going to convert a 1d array in the 2d array this question is also available on leetcode as quesion 2022
#include<iostream>
#include<vector>
using namespace std;

vector<vector <int>> convert(vector<int> original, int m, int n){
        if (original.size() != m * n) return {};
        int idx=0;
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=original[idx];
                idx++;
            }
        }
        return ans;
}

void print(vector<vector <int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> original={1,2,3,4};
    int m=2 , n=2;
    vector<vector <int>> ans=convert(original,m,n);
    print(ans);
    return 0;
}