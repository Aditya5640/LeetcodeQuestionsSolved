The digits of the two numbers are stored in reverse order in two linked lists. Instead of converting the linked lists into integers, we perform addition digit by digit, similar to manual addition.

We traverse both linked lists simultaneously and maintain a carry variable.

For each iteration:

Read the current digit from both linked lists. If a list has ended, use 0 as its digit.

Calculate:

sum = digit1 + digit2 + carry

Store the last digit of the sum in a new node:

newDigit = sum % 10

Update the carry:

carry = sum / 10

Append the new node to the result linked list.
Move both pointers to their next nodes.

A dummy node is used to simplify the construction of the result linked list. The process continues until both linked lists are fully traversed and there is no carry left.

Finally, return the linked list starting from dummy->next.
Time Complexity

O(max(n, m))

where n and m are the lengths of the two linked lists.

Space Complexity

O(max(n, m))

for storing the resulting linked list.
