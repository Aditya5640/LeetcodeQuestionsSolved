make two vectors values and symbols to store the values:
    vector<int> values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};   
    vector<string> symbols = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
use greedy method:
check for all values of vector values if num>=values[i] using for loop
goal is finding the values[i] element which is closest and >= num so we can subtract it from and append the symbols[i] corresponding to that values[i].
We repeat this and keep adding symbols[i] to our ans variable and when nums ends we return the ans.
1. Integer to Roman
Algorithm
Iterate through the 13 Roman values.
While the current value can be subtracted from num:
Append its symbol.
Subtract the value.
Time Complexity

Strictly speaking:

O(1)
Why?

The array has a fixed size of 13.

1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1

No matter what num is (within the problem constraints), you never iterate over more than 13 values.

Even the while loops are bounded because Roman numerals repeat at most a few times:

Example:

3888

MMM
D
CCC
L
XXX
VIII

Maximum repetitions:

M at most 3 times (problem constraint is num <= 3999)
C, X, I at most 3 times before using subtractive notation.

So the total work is bounded by a constant.

Interview Answer:

Time Complexity = O(1)
Space Complexity

Ignoring the output string:

O(1)

The vectors always contain exactly 13 elements.

If the interviewer asks about the output string:

Auxiliary space = O(1)
Output space = O(1) (maximum Roman numeral length for 3999 is constant)
