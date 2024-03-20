#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.size() == 1) { return strs[0]; }
        if (strs[0].length() == 0) { return ""; }
        int l_start = 0;
        int l_end = 0;
        int l_len = 0;
        int indx = 0;
        char curr = 0;

        bool all_same = true;

        while (all_same)
        {
            for (string s : strs)
            {
                if (indx >= s.length())
                {
                    return strs[0].substr(0, indx);
                }
            }

            curr = strs[0][indx];
            for (string s : strs)
            {
                if (s[indx] != curr)
                {
                    all_same = false;
                }
            }
            indx++;
        }
        return strs[0].substr(0, indx - 1);
    }
};