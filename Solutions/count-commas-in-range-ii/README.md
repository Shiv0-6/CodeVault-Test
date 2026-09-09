# 3871. Count Commas in Range II

**Difficulty:** Medium

**Language:** C++

**LeetCode Link:** [count-commas-in-range-ii](https://leetcode.com/problems/count-commas-in-range-ii/)

---

## Problem Description

You are given an integer n.

Return the total number of commas used when writing all integers from [1, n] (inclusive) in standard number formatting.

In standard formatting:


	A comma is inserted after every three digits from the right.
	Numbers with fewer than 4 digits contain no commas.


 
Example 1:


Input: n = 1002

Output: 3

Explanation:

The numbers "1,000", "1,001", and "1,002" each contain one comma, giving a total of 3.


Example 2:


Input: n = 998

Output: 0

Explanation:

​​​​​​​All numbers from 1 to 998 have fewer than four digits. Therefore, no commas are used.


 
Constraints:


	1 <= n <= 1015

---

## Solution

See [solution.cpp](./solution.cpp) for the implementation.

```cpp
        }        }
        return ans;        return ans;
            if (base > LLONG_MAX / 1000) break; // prevents overflow            if (base > LLONG_MAX / 1000) break; // prevents overflow
            ans += (n - base + 1);            ans += (n - base + 1);
        for (long long base = 1000; base <= n; base *= 1000) {        for (long long base = 1000; base <= n; base *= 1000) {
        long long ans = 0;        long long ans = 0;
    long long countCommas(long long n) {    long long countCommas(long long n) {
public:public:
class Solution {class Solution {
```

---

*Synced automatically by [CodeVault](https://github.com)*
