## Approach

We use two pointers, `left` and `right`, to maintain a sliding window containing unique characters.

As we move the `right` pointer, we add characters to the window.

If the current character already exists in the window, a duplicate is found. In that case, we repeatedly remove characters from the left side of the window and move the `left` pointer forward until the duplicate character is no longer present.

Once the duplicate is removed, we add the current character to the window and continue expanding the window.

During each step, we keep track of the maximum window length, which represents the longest substring without repeating characters.
