#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int idx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[idx]);
            idx++;
        }
    }
}

int main()
{

    vector<int> v = {0, 1, 2, 30, 4, 5, 0, 5, 0, 7, 0};
    moveZeroes(v);
    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}