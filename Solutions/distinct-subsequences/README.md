# 115. Distinct Subsequences

**Difficulty:** Hard

**Language:** C++

**LeetCode Link:** [distinct-subsequences](https://leetcode.com/problems/distinct-subsequences/)

---

## Problem Description

Given two strings s and t, return the number of distinct subsequences of s which equals t.

The test cases are generated so that the answer fits on a 32-bit signed integer.

 

Example 1:

Input: s = "rabbbit", t = "rabbit"
Output: 3
Explanation:
As shown below, there are 3 ways you can generate "rabbit" from s.
rabbbit
rabbbit
rabbbit


Example 2:

Input: s = "babgbag", t = "bag"
Output: 5
Explanation:
As shown below, there are 5 ways you can generate "bag" from s.
babgbag
babgbag
babgbag
babgbag
babgbag

 

Constraints:

1 <= s.length, t.length <= 1000
s and t consist of English letters.

---

## Solution

See [solution.cpp](./solution.cpp) for the implementation.

```cpp
public:public:
    int numDistinct(string s, string t) {    int numDistinct(string s, string t) {
        int m = s.length();        int m = s.length();
        int n = t.length();        int n = t.length();
                
        // dp[j] represents the number of distinct subsequences of s that match t[0...j-1]        // dp[j] represents the number of distinct subsequences of s that match t[0...j-1]
        // Using unsigned long long to avoid intermediate overflow during additions        // Using unsigned long long to avoid intermediate overflow during additions
        vector<unsigned long long> dp(n + 1, 0);        vector<unsigned long long> dp(n + 1, 0);
        dp[0] = 1; // An empty string t can always be formed in exactly 1 way        dp[0] = 1; // An empty string t can always be formed in exactly 1 way
                
```

---

*Synced automatically by [CodeVault](https://github.com)*
