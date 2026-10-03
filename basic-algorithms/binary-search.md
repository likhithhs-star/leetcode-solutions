# Binary Search

- **Difficulty:** Easy
- **Topic:** Basic Algorithms
- **LeetCode:** https://leetcode.com/problems/binary-search/

## Approach
Use two pointers representing the current search range. Compare the middle element with the target and discard half of the search space each iteration.

## Complexity
- Time: O(log n)
- Space: O(1)

## Test Cases
1. `nums = [-1,0,3,5,9,12], target = 9` → `4`
2. `nums = [-1,0,3,5,9,12], target = 2` → `-1`

## Edge Cases
- One-element array
- Target absent
- Target at first or last position
