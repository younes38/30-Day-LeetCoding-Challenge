// Problem Statement:
//Write an algorithm to determine if a number is "happy".
//A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

// Accepted solution:
class Solution
{
public:
    int cal(int n)
    {
        int s = 0;
        while (n)
        {
            int c = n % 10;
            n /= 10;
            s += (c * c);
        }
        return s;
    }

    bool isHappy(int n)
    {
        unordered_map<int, bool> mp;
        while (true)
        {
            n = cal(n);
            if (n == 1)
                return true;
            if (mp[n])
                return false;
            mp[n] = true;
        }
    }
};
