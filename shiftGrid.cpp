

class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> newArr(m, vector<int>(n, 0));

        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                int newIndex = ((r * n + c) + k) % (m * n);
                int newRow = newIndex / n;
                int newColum = newIndex % n;
                newArr[newRow][newColum] = grid[r][c];
            }
        }

        return newArr;
    }
};

// https: // leetcode.com/problems/shift-2d-grid/submissions/907178036/