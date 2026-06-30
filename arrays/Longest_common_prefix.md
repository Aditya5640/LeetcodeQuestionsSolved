Use the first string as the reference string.
Traverse each character of the reference string from left to right.
For every character position, compare that character with the character at the same position in every other string.
Before comparing, check whether the current string has already ended. If it has, return the common prefix found so far.
If any character does not match the reference string, return the common prefix immediately.
If all strings have the same character at the current position, append that character to the answer.
Continue until all characters of the reference string are processed or a mismatch is found.
time complexity is O(N*M)
Space complexity is auxiliary space complexity (ignorng the output lcp) which is O(1).
