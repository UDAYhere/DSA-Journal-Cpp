#include<iostream>
#include<list>
using namespace std;

class stack{
    list<int> s;
    public:

    void push(int val)
    {
        s.push_front(val);
    }

    int pop(){
        s.pop_front();
    }

    int top(){
        return s.front(); 
    }

    bool empty(){
        return s.size()==0;
    }

};