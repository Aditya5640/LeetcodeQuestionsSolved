# Longest Palindromic Substring (LeetCode 5)

## Approach

A palindrome reads the same from left to right and right to left. Every palindrome has a center, so we use the **Expand Around Center** technique.

For each index in the string, we consider two possible centers:

1. **Odd-length palindrome:** The center is a single character.

   * Example: `"racecar"` → center is `'e'`.

2. **Even-length palindrome:** The center lies between two characters.

   * Example: `"abba"` → center is between the two `'b'` characters.

For each center, we expand towards both sides as long as:

* The left pointer remains within the string.
* The right pointer remains within the string.
* Characters at both pointers are equal.

After expansion stops, we calculate the length of the palindrome found. If its length is greater than the maximum length seen so far, we update:

* The starting index of the longest palindrome.
* The maximum palindrome length.

After checking all possible centers, we return the substring starting at the recorded index with the recorded maximum length.

## Time Complexity

O(n²)

## Space Complexity

O(1)
