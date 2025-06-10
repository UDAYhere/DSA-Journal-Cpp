#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long binF = n;
        if (n < 0) {
            x = 1 / x;
            binF = -binF;
        }
        double ans = 1;
        while (binF > 0) {
            if (binF % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binF /= 2;
        }
        return ans;
    }
};

int main()
{
    int x,n;
    cin>>x;
    cin>>n;
    double pre=0,post=0,last=0;
    while(x>0)
    {
        if(n%2==0)
        {
            pre=(x*x);
            for (int i = 1; i < n/2; i++)
            {
                post=(pre*(n/2));
                last+=post;
            }
            
        }
        else
        {
            pre=(x*x);
            for (int i = 1; i < n/2; i++)
            {
                post=pre*(pre*(n-1/2));
                last+=post;
            }
            
        }
    }
    cout<<last;
    return 0;
}

