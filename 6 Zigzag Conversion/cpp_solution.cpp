#include <string>
using namespace std;

class Solution
{
public:
    string convert(string s, int n)
    {
        if (n == 1 || s.length() == 1) { return s; }
        string sol = "";
    
        for (int x = 0; x < s.length(); x += (2 * n - 2))
        {
            sol += s[x];
            if (sol.length() == s.length()) { return sol; }
        }
    
        for (int x = 1; x < n - 1; x++)
        {
            sol += s[x];
        
            for (
                int y = x + (2 * n - 2); 
                y < s.length() + (2 * n - 3);
                y += (2 * n - 2))
            {
                if (y - x * 2 < s.length()) { sol += s[y - x * 2]; }
                if (sol.length() == s.length()) { return sol; }
                if (y < s.length()) { sol += s[y]; }
                if (sol.length() == s.length()) { return sol; }
            }
        }
    
        for (int x = n - 1; x < s.length(); x += (2 * n - 2))
        {
            if (x < s.length()) { sol += s[x]; }
            if (sol.length() == s.length()) { return sol; }
        }
    
        return sol.substr(0, s.length());
    }
};