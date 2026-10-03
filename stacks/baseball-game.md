# Baseball Game

- **Difficulty:** Easy
- **Topic:** Stacks
- **LeetCode:** https://leetcode.com/problems/baseball-game/

## Approach
Use a stack to store valid scores. `C` removes the previous score, `D` doubles it, and `+` adds the previous two scores.

## Complexity
- Time: O(n)
- Space: O(n)

## Test Cases
1. `["5","2","C","D","+"]` → `30`
2. `["5","-2","4","C","D","9","+","+"]` → `27`

## Edge Cases
- Negative scores
- Consecutive operations
- Cancel operation
