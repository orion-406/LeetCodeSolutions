#include <limits>

class Solution
{
public:
    int reverse(int x)
    {
        long n_x = x;

        long n = 0;

        short neg = (n_x > 0 ? 1 : -1);

        if (n_x < 0) { n_x *= -1; }

        // 2,147,483,648

        while (n_x > 0)
        {
            n *= 10;
            n += n_x % 10;
            n_x /= 10;
        }

        if (n > INT_MAX) { return 0; }

        return n * neg;
    }
};