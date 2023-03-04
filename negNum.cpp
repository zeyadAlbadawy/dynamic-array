
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        int negNum = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] < 0)
                {
                    negNum++;
                }
            }
        }

        return negNum;
    }
};

// https: // leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/907884960/