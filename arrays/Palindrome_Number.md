We need to check whether an integer reads the same from left to right and right to left.

Instead of reversing the entire number, we reverse only the second half of the digits.

Negative numbers cannot be palindromes, so return false.
Numbers ending in 0 (except 0 itself) cannot be palindromes.
Repeatedly:
Take the last digit using % 10.
Append it to reversedHalf.
Remove the last digit from x using / 10.
Stop when reversedHalf becomes greater than or equal to the remaining part of x.

For even-length numbers, compare:

x == reversedHalf

For odd-length numbers, ignore the middle digit:

x == reversedHalf / 10
If either comparison is true, the number is a palindrome.
Time Complexity
O(log n)

We process only half of the digits.

Space Complexity
O(1)

No extra data structures are used.
