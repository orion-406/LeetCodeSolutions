#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() == 0) { return 0; }
        int lenLongest = 1;

        for (int x = 0; x < s.length(); x++)
        {
            for (int y = x + 1; y < s.length(); y++)
            {
                // check string for repeats
                bool found_repeats = false;
                for (int p = y - 1; p >= x; p--)
                {
                    if (s[p] == s[y]) { found_repeats = true; break; }
                }

                if (!found_repeats)
                {
                    if (y - x + 1 > lenLongest)
                    {
                        lenLongest = y - x + 1;
                    }
                }
                else
                    break;
            }
        }
        return lenLongest;
    }
};