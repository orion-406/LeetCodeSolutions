#include <vector>

class Solution
{
public:
    std::pair<int, int> twoSumII(std::vector<int> arr, int target)
    {
        int* loc1 = &arr[0];
        int* loc2 = &arr[arr.size() - 1];
        int total;

        while (loc1 < loc2)
        {
            total = *loc1 + *loc2;
            if (total < target)
            {
                loc1++;
            }
            else if (total > target)
            {
                loc2--;
            }
            else
            {
                return { loc1 - &arr[0] + 1, loc2 - &arr[0] + 1 };
            }
        }
        // return { 0, 0 }; gaurenteed a solution, unneccesary
    }
};