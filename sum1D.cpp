

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                arr.push_back(nums[0]);
            }
            else
            {
                arr.push_back(arr[i - 1] + nums[i]);
            }
        }

        return arr;
    }
};

https: // leetcode.com/problems/running-sum-of-1d-array/submissions/907270495/