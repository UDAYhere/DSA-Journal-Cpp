#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector <int>>m={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int target=12;
    pair<int,int> p={-1,-1};
    for(int i=0;i<m.size();i++){
        for (int j = 0; j < m[0].size(); j++)
        {
            if(m[i][j]==target){
                p.first = i;
                p.second = j;
            }
        }
        
    }
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}