#include <string>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int n = 0;
        if (s.length() == 0) { return n; }

        while (s.at(0) == ' ')
        {
            s = s.substr(1, s.length() - 1);
            if (s.length() == 0) { return n; }
        }

        if (s.length() == 0) { return n; }
        
        bool neg = (s.at(0) == '-' ? true : false);
        if (s.at(0) == '+' || s.at(0) == '-')
        { s = s.substr(1, s.length() - 1); }
        if (neg == -1) { s = s.substr(1, s.length() - 1); }

        if (s.length() == 0) { return n; }
        
        for (int x = 0; x < s.length(); x++)
        {
            char c = s[x];
            if ((int)c > 57 || (int)c < 48) { break; }
            
            if (neg)
            {
                n = max(
                    (long)n * 10,
                    (long)INT_MIN
                );
                n = max(
                    (long)n - c_to_d(c),
                    (long)INT_MIN
                );
            }
            else
            {
                n = min(
                    (long)n * 10,
                    (long)INT_MAX
                );
                n = min(
                    (long)n + c_to_d(c),
                    (long)INT_MAX
                );
            }
            // cout << x << ": " << n << endl;
        }

        return n;
    }

    int c_to_d(char c)
    {
        if ((int)c > 57) { return 0; }
        return (int)(c) - 48;
    }
};