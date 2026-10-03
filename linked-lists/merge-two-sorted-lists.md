# Merge Two Sorted Lists

- **Difficulty:** Easy
- **Topic:** Linked Lists
- **LeetCode:** https://leetcode.com/problems/merge-two-sorted-lists/

## Approach
Compare the current nodes of both lists and repeatedly attach the smaller node to the merged list.

## Complexity
- Time: O(n + m)
- Space: O(1)

## Test Cases
1. `[1,2,4]` and `[1,3,4]` → `[1,1,2,3,4,4]`
2. `[]` and `[]` → `[]`

## Edge Cases
- One list is empty
- Both lists are empty
- Duplicate values
