we have to basically find the largest area.
use two pointers left and right to find minimum height of bars at left and right positions.
then calculate the width between them(right-left).
multiply these two to find the area for every bars in the given vector.
if left bar is smaller left++ otherwise right--.
end the loop and return maxarea.
Time Complexity = O(n).
Space Complexity is O(1).
