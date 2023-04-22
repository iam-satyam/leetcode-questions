class Solution {
public:
    int minInsertions(string s) {
        int N = s.size();
        string st(s.rbegin(), s.rend());
        vector<vector<int>> dp(N + 1, vector<int>(N + 1));
      
        for (int i = 0; i <= N; i++) {
          
            for (int j = 0; j <= N; j++) {
              
                if (i == 0 || j == 0) dp[i][j] = i + j;
              
                else if (s[i - 1] == st[j - 1]) dp[i][j] = dp[i - 1][j - 1];
              
                else dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[N][N] / 2;
    }
};
