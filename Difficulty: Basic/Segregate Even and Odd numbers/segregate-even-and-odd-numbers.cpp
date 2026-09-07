class Solution {
public:
    void segregateEvenOdd(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            if (a % 2 != b % 2) {
                return a % 2 < b % 2;
            }
            return a < b;             
        });
    }
};