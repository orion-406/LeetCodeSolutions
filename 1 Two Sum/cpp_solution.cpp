#include <utility>
#include <vector>
#include <unordered_map>

class Solution
{
public:
	static const std::pair<int, int> twoSum(std::vector<int> arr, int target)
	{
		std::unordered_map<int, int> summap;

		int diff;
		for (int i = 0; i < arr.size(); i++)
		{
			diff = target - arr[i];
			if (summap.count(diff))
			{
				return { i, summap[diff] };
			}
			summap[arr[i]] = i;
		}
	}
};