//this is code we are solving the problem of 2D array this question is also available on leetcode as 54 and

//in this question we have to print the given array which is given in the form of M X N and we have to perform a operation to store the data or you can say that we have to traverse the array in a sprial format

//we can simply perform it by using loops for a particular row and coloumn and we are going to store the value in the vector named ans 

//just try to understand the matrix and see how it is going to perform the operation
#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> m={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    vector <int> ans;
    int r1=0, r2=m.size()-1, c1=0, c2=m[0].size()-1;
    while(r1<=r2 && c1<=c2){
        for(int i=c1; i<=c2; i++){
            ans.push_back(m[r1][i]);
        }
        r1++;

        for(int i=r1; i<=r2; i++){
            ans.push_back(m[i][c2]);
        }
        c2--;

        if(r1 <= r2){
            for(int i=c2; i>=c1; i--){
                ans.push_back(m[r2][i]);
            }
            r2--;
        }
        if(c1 <= c2){
            for(int i=r2; i>=r1; i--){
                ans.push_back(m[i][c1]);
            }
            c1++;
        }
    }

    for(auto i:ans){
        cout<< i <<" ";
    }

}