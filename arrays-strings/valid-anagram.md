# Valid Anagram

- **Difficulty:** Easy
- **Topic:** Arrays & Strings
- **LeetCode:** https://leetcode.com/problems/valid-anagram/

## Approach
Count the frequency of each lowercase English letter in the first string and subtract the frequencies found in the second string.

## Complexity
- Time: O(n)
- Space: O(1)

## Test Cases
1. `s = "anagram", t = "nagaram"` → `true`
2. `s = "rat", t = "car"` → `false`

## Edge Cases
- Different string lengths
- Repeated characters
- Empty strings
