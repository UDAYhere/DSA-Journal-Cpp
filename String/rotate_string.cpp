// in this file of code i am going to solve the leetcode question number 796..
//the question is basically that there is two strings s and goal in the string s i can perform the rotation like form the left most to the right most element and if the rotation reaches or after the rotation string macthes the goal then we have to return true else false 

#include<iostream>
#include<string>
using namespace std;


    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        
        return (s+s).find(goal)!=string::npos;
    }

int main(){
    string s="abce", goal="ceab";
    bool ans=rotateString(s, goal);
    cout<<ans;
}