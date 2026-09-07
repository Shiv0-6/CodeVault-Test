class Solution {class Solution {
public:public:
    int distinctSubseqII(string s) {    int distinctSubseqII(string s) {
        long long MOD = 1e9 + 7;        long long MOD = 1e9 + 7;
                
        // last[c] stores the count of distinct non-empty subsequences ending with character ('a' +         // last[c] stores the count of distinct non-empty subsequences ending with character ('a' + 
        c)        c)
        vector<long long> last(26, 0);        vector<long long> last(26, 0);
                
