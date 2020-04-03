// Problem statement:
// Given a non-empty array of integers, every element appears twice except for one. Find that single one.

// Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Accepted solution:
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int e : nums)
            ans ^= e;
        return ans;
    }
};
