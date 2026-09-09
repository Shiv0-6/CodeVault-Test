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
