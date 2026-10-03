# Two Sum

- **Difficulty:** Easy
- **Topic:** Arrays & Strings
- **LeetCode:** https://leetcode.com/problems/two-sum/

## Approach
Check every possible pair using two nested loops and return the indices whose sum equals the target.

## Complexity
- Time: O(n²)
- Space: O(1) auxiliary space

## Test Cases
1. `[2,7,11,15]`, target `9` → `[0,1]`
2. `[3,2,4]`, target `6` → `[1,2]`

## Edge Cases
- Negative numbers
- Pair near the end
- Exactly one valid solution
