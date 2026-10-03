# Reverse Linked List

- **Difficulty:** Easy
- **Topic:** Linked Lists
- **LeetCode:** https://leetcode.com/problems/reverse-linked-list/

## Approach
Iteratively reverse each `next` pointer while maintaining previous, current, and next node references.

## Complexity
- Time: O(n)
- Space: O(1)

## Test Cases
1. `[1,2,3,4,5]` → `[5,4,3,2,1]`
2. `[1,2]` → `[2,1]`

## Edge Cases
- Empty list
- One-node list
