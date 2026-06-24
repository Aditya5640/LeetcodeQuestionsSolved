class Solution {
public:
     vector<vector<int>> dp;

    bool solve(int i, int j, string& s, string& p) {

        if (dp[i][j] != -1)
            return dp[i][j];

        if (j == p.length())
            return dp[i][j] = (i == s.length());

        bool firstMatch =
            i < s.length() &&
            (s[i] == p[j] || p[j] == '.');

        if (j + 1 < p.length() && p[j + 1] == '*') {

            return dp[i][j] =
                solve(i, j + 2, s, p) ||
                (firstMatch && solve(i + 1, j, s, p));
        }

        return dp[i][j] =
            firstMatch && solve(i + 1, j + 1, s, p);
    }
    bool isMatch(string s, string p) {
          dp.resize(
            s.length() + 1,
            vector<int>(p.length() + 1, -1)
        );

        return solve(0, 0, s, p);
    }
 
    
};
