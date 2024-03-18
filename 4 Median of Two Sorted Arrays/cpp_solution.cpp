#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> compiled;

        int f_i = 0;
        int s_i = 0;

        while (f_i < nums1.size() && s_i < nums2.size())
        {
            if (nums1[f_i] < nums2[s_i])
                compiled.push_back(nums1[f_i++]);
            else
                compiled.push_back(nums2[s_i++]);
        }

        while (f_i < nums1.size())
            compiled.push_back(nums1[f_i++]);
        
        while (s_i < nums2.size())
            compiled.push_back(nums2[s_i++]);

        int begin = 0;
        int end = compiled.size() - 1;

        while (begin + 1 <= end - 1)
        {
            begin++;
            end--;
        }

        return (double)(compiled[begin] + compiled[end]) / 2;
    }
};