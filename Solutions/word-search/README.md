# Word Search

**Difficulty:** Medium

**Language:** C++

**LeetCode Link:** [word-search](https://leetcode.com/problems/word-search/)

---

## Problem Description

No description available.

---

## Solution

See [solution.cpp](./solution.cpp) for the implementation.

```cpp
class Solution {class Solution {
public:public:
    bool exist(vector<vector<char>>& board,     bool exist(vector<vector<char>>& board, 
    string word) {    string word) {
        int m = board.size();        int m = board.size();
        int n = board[0].size();        int n = board[0].size();
                
        // Start DFS from every cell in the         // Start DFS from every cell in the 
        grid        grid
        for (int i = 0; i < m; ++i) {        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {            for (int j = 0; j < n; ++j) {
                // If the first character                 // If the first character 
                matches, attempt to find the                 matches, attempt to find the 
                full word                full word
                if (dfs(board, word, i, j,                 if (dfs(board, word, i, j, 
                0)) {                0)) {
                    return true;                    return true;
                }                }
            }            }
        }        }
        return false;        return false;
```

---

*Synced automatically by [CodeVault](https://github.com)*
