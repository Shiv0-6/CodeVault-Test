public:public:
    // Change "findEvenNumbers" to "totalNumbers" to match the test runner    // Change "findEvenNumbers" to "totalNumbers" to match the test runner
    int totalNumbers(vector<int>& digits) {     int totalNumbers(vector<int>& digits) { 
                
        // 1. Count your digits        // 1. Count your digits
class Solution {class Solution {
        vector<int> myWallet(10, 0);        vector<int> myWallet(10, 0);
        for (int d : digits) {        for (int d : digits) {
            myWallet[d]++;            myWallet[d]++;
