#include <vector>

class Solution
{
public:
    int rob(std::vector<int> houses)
    {
        int rob1, rob2 = 0;

        // [ ..., rob1, rob2, house, ...]
        for (int& house : houses)
        {
            int temp = std::max(house + rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }
};