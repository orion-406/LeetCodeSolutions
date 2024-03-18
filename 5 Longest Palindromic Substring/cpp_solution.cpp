#include <string>
using namespace std;

class Solution {
public:
    bool stringPalindrome(string &s, int &b, int &e)
    {
        for (int x = 0; x < (e - b) / 2 + 1; x++)
        {
            if (s[b + x] != s[e - x]) { return false; }
        }
        return true;
    }

    string longestPalindrome(string s)
    {
        if (s.length() <= 1) { return s; }
        int l_start = 0;
        int l_end = 0;
        int l_len = 0;

        for (int x = 0; x < s.length(); x++)
        {
            for (int y = x + 1; y < s.length(); y++)
            {
                if (stringPalindrome(s, x, y) && y - x > l_len)
                {
                    l_len = y - x;
                    l_start = x;
                    l_end = y;
                }
            }
        }
        return s.substr(l_start, l_len + 1);
    }
};