Use a hash map to store elements already visited.

For each element:
1. Find complement = target - current element.
2. Check if complement exists in the map.
3. If yes, return indices.
4. Otherwise store current element and index.

Time Complexity : O(n)
Space Complexity : O(n)
