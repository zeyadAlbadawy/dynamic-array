class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maxSum = 0;
        int m = accounts.size();
        int n = accounts[0].size();

        int a[m];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                maxSum += accounts[i][j];
            }
            a[i] = maxSum;
            maxSum = 0;
        }

        int max = a[0];
        for (int k = 0; k < m; k++)
        {
            if (a[k] > max)
            {
                max = a[k];
            }
        }

        return max;
    }
};

// https: // leetcode.com/problems/richest-customer-wealth/submissions/906163821/