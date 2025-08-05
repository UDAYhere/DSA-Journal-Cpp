// --> so in this code i am going to use a basic use of recursion that how we perform recursion so i am going to calulate the sum of n numbers through recursion
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }

    return fib(n-1)+ fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}