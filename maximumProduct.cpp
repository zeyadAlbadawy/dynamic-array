

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {

        // int size = sizeof(nums) / sizeof(nums[0]);
        int maxValue = 0;
        sort(nums.begin(), nums.end());
        return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
    }
};

// https: // leetcode.com/problems/maximum-product-of-two-elements-in-an-array/submissions/906704858/