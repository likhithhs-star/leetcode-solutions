# Valid Parentheses

- **Difficulty:** Easy
- **Topic:** Stacks
- **LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Approach
Use a stack to store opening brackets. Whenever a closing bracket appears, check whether it matches the most recent opening bracket.

## Complexity
- Time: O(n)
- Space: O(n)

## Test Cases
1. `"()"` → `true`
2. `"([)]"` → `false`

## Edge Cases
- Empty string
- Single pair
- Mismatched brackets
