class Solution {class Solution {
    struct Interval {    struct Interval {
        int l, r, weight, id;        int l, r, weight, id;
    };    };

    struct State {    struct State {
        long long score = 0;        long long score = 0;
        vector<int> indices;        vector<int> indices;

