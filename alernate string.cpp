class Solution {
public:
    string mergeAlternately(string word1, string wrd2) {
        int i = 0;
        int j = 0;
        int M = word1.size();
        int N = word2.size();
        string ans;
        while (i < M || j < N) {
            if (i < M) ans += word1[i++];
            if (j < N) ans += word2[j++];
        }
        return ans;
    }
};
