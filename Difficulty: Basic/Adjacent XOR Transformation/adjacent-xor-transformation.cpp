class Solution {
public:
    vector<int> xorArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans = arr;

        for (int i = 0; i < n - 1; i++) {
            ans[i] = arr[i] ^ arr[i + 1];
        }

        return ans;
    }
};