Algorithm
Traverse the string once.
Compare the current numeral with the next.
Add or subtract accordingly.
Time Complexity

Suppose the Roman numeral has length n.

You visit each character exactly once.

Time Complexity = O(n)

Example:

MCMXCIV

You process:

M
C
M
X
C
I
V

once each.

Space Complexity

The unordered_map contains only:

I
V
X
L
C
D
M

which is always 7 entries.

Therefore:

Space Complexity = O(1)
Interview Table
Problem	Time	Space
Integer to Roman	O(1)	O(1)
Roman to Integer	O(n)	O(1)
