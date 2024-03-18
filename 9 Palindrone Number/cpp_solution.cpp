class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0) { return false; }
        return getPalindrone(x) == x;
    }

    int getPalindrone(int start)
    {
        long ret = 0;
        while (start > 0)
        {
            ret *= 10;
            ret += start % 10;
            start /= 10;
        }

        return ret;
    }
};