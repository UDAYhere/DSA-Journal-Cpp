#include<iostream>
#include<vector>
using namespace std;

class stack{
    vector<int> s;
    public:

    void push(int val)
    {
        s.push_back(val);
    }

    int pop(){
        s.pop_back();
    }

    int top(){
        return s[s.size()-1]; 
    }

    bool empty(){
        return s.size()==0;
    }

};