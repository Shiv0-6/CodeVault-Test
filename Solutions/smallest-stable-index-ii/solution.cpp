class Solution {class Solution {
public:public:
    int firstStableIndex(vector<int>& nums, int k) {    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();        int n = nums.size();
        vector<int> suffMin(n);        vector<int> suffMin(n);
                
        suffMin[n - 1] = nums[n - 1];        suffMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {        for (int i = n - 2; i >= 0; --i) {
            suffMin[i] = min(suffMin[i + 1], nums[i]);            suffMin[i] = min(suffMin[i + 1], nums[i]);
