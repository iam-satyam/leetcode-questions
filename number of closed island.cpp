class Solution {
    int direct[4][2] = { {0,1},{0,-1},{-1,0},{1,0} }, M, N;
    bool dfs(vector<vector<int>> &grid, int x, int y, int id) {
        grid[x][y] = id;
        bool ans = true;
        
        for (auto &[dx, dy] : direct) {
            int a = x + dx, b = y + dy;

            bool oob = a < 0 || b < 0 || a >= M || b >= N;
            ans = ans && !oob;
            if (oob || grid[a][b] != 0) continue;

            ans = dfs(grid, a, b, id) && ans;
        }
        return ans;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {

        int id = 2, ans = 0;
        M = grid.size(), N = grid[0].size();
        for (int i = 0; i < M; ++i) {

            for (int j = 0; j < N; ++j) {

                if (grid[i][j] != 0) {continue;}
                if (dfs(grid, i, j, id++)) ++ans;
            }
        }
        return ans;
    }
};
