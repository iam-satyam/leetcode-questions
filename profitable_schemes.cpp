class Solution {
public:
    int profitableSchemes(int N, int minProfit, vector<int>& group, vector<int>& profit) {
        long modulo = 1e9 + 7;
        long M = group.size();
        long mat[101][101][101] = {}; 
        for (int j = 0; j <= N; j++) 
        {
            mat[0][j][0] = 1;
            }
        for (int i = 0; i < M; i++) {

            for (int j = 0; j <= N; j++) 
            {
                for (int k = 0; k <= minProfit; k++)
                 {
                    long val = mat[i][j][k];
                    if (j - group[i] >= 0){
                        val = (val + mat[i][j - group[i]][max(0, k - profit[i])]) % modulo;
                        }
                    mat[i + 1][j][k] = val;
                }
            }
        }
        return mat[M][N][minProfit];
    }
};
