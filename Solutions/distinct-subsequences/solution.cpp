public:public:
    int numDistinct(string s, string t) {    int numDistinct(string s, string t) {
        int m = s.length();        int m = s.length();
        int n = t.length();        int n = t.length();
                
        // dp[j] represents the number of distinct subsequences of s that match t[0...j-1]        // dp[j] represents the number of distinct subsequences of s that match t[0...j-1]
        // Using unsigned long long to avoid intermediate overflow during additions        // Using unsigned long long to avoid intermediate overflow during additions
        vector<unsigned long long> dp(n + 1, 0);        vector<unsigned long long> dp(n + 1, 0);
        dp[0] = 1; // An empty string t can always be formed in exactly 1 way        dp[0] = 1; // An empty string t can always be formed in exactly 1 way
                
