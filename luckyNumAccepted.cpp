
class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        unordered_map<int, int> counter;

        int maxCount = 0;

        for (int num : arr)
        {
            counter[num] += 1;
            maxCount = max(maxCount, counter[num]);
        }

        int ans = -1;
        for (auto it = counter.begin(); it != counter.end(); it++)
        {
            if (it->first == it->second)
            {
                ans = max(ans, it->first);
            }
        }

        return ans;
    }
};

// https: // leetcode.com/problems/find-lucky-integer-in-an-array/submissions/908309410/