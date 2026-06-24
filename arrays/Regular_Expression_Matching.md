Approach: Recursion + Memoization

Define solve(i, j) as:

Whether the substring s[i...] matches the pattern p[j...].

Base Case:
If the pattern is exhausted (j == p.length()), the string must also be exhausted.
firstMatch:
Current characters match if:
s[i] == p[j], or
p[j] == '.'.
If the next pattern character is '*':
Skip x* completely → solve(i, j + 2)
Use x* to consume one matching character → solve(i + 1, j)
Otherwise:
Move both pointers forward → solve(i + 1, j + 1)
Use DP table dp[i][j] to store previously computed states.
Time Complexity
O(n × m)

where:

n = s.length()
m = p.length()

Each state (i, j) is computed once.

Space Complexity
O(n × m)

for the DP table.

Additional recursion stack:

O(n + m)
