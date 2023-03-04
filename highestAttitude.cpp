
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int maxRes = 0;
        int alt = 0;

        vector<int> arr;
        for (int x : gain)
        {
            alt += x;
            arr.push_back(alt);
        }
        int maxValue = arr[0];

        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] > maxValue)
            {
                maxValue = arr[j];
            }
        }

        if (maxValue <= 0)
            return 0;
        else
            return maxValue;
    }
};

// https: // leetcode.com/problems/find-the-highest-altitude/submissions/908239498/
