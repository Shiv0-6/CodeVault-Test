# 144. Binary Tree Preorder Traversal

**Difficulty:** Easy

**Language:** C++

**LeetCode Link:** [binary-tree-preorder-traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)

---

## Problem Description

Given the root of a binary tree, return the preorder traversal of its nodes' values.

 
Example 1:


Input: root = [1,null,2,3]

Output: [1,2,3]

Explanation:




Example 2:


Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [1,2,4,5,6,7,3,8,9]

Explanation:




Example 3:


Input: root = []

Output: []


Example 4:


Input: root = [1]

Output: [1]


 
Constraints:


	The number of nodes in the tree is in the range [0, 100].
	-100 <= Node.val <= 100


 
Follow up: Recursive solution is trivial, could you do it iteratively?

---

## Solution

See [solution.cpp](./solution.cpp) for the implementation.

```cpp
 * }; * };
 */ */
class Solution {class Solution {
private:private:
 left(left), right(right) {} left(left), right(right) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), 
    void dfs(TreeNode * node,vector<int>&arr){    void dfs(TreeNode * node,vector<int>&arr){
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {} *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode *right; *     TreeNode *right;
 *     TreeNode *left; *     TreeNode *left;
 *     int val; *     int val;
 * struct TreeNode { * struct TreeNode {
 * Definition for a binary tree node. * Definition for a binary tree node.
/**/**
```

---

*Synced automatically by [CodeVault](https://github.com)*
