// Problem statement
//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// Accepted solution:
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int mx = nums[0];
        int s = 0;
        for (int e : nums)
        {
            s += e;
            mx = max(mx, s);
            if (s < 0)
                s = 0;
        }
        return mx;
    }
};
