        vector<int> suffix_min(n);        vector<int> suffix_min(n);
                
        suffix_min[n - 1] = nums[n - 1];        suffix_min[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {        for (int i = n - 2; i >= 0; --i) {
            suffix_min[i] = min(nums[i], suffix_min[i + 1]);            suffix_min[i] = min(nums[i], suffix_min[i + 1]);
        }        }
                
        int prefix_max = nums[0];        int prefix_max = nums[0];
        for (int i = 0; i < n; ++i) {        for (int i = 0; i < n; ++i) {
            prefix_max = max(prefix_max, nums[i]);            prefix_max = max(prefix_max, nums[i]);
            if (prefix_max - suffix_min[i] <= k) {            if (prefix_max - suffix_min[i] <= k) {
                return i;                return i;
            }            }
        }        }
                
        int n = nums.size();        int n = nums.size();
    int firstStableIndex(vector<int>& nums, int k) {    int firstStableIndex(vector<int>& nums, int k) {
public:public:
class Solution {class Solution {
