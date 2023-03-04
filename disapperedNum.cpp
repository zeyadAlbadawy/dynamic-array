
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {

        vector<int> grid;

        for (int i = 0; i < nums.size(); i++)
        {
            int x = abs(nums[i]) - 1;

            if (nums[x] > 0)
            {
                nums[x] = -nums[x];
            }
        }

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] > 0)
            {
                grid.push_back(j + 1);
            }
        }

        return grid;
    }
};

// https: // leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/907690481/