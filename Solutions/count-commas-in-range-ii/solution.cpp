public:public:
    long long countCommas(long long n) {    long long countCommas(long long n) {
        long long ans=0;        long long ans=0;
        for(long long base=1000; base <=n; base++){        for(long long base=1000; base <=n; base++){
            ans += (n- base + 1);            ans += (n- base + 1);
        }        }
        return ans;        return ans;
class Solution {class Solution {
            break;            break;
