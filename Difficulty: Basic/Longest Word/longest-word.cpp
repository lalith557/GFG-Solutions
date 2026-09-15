class Solution {
public:
    string longest(vector<string>& arr) {
        string ans = "";

        for (string s : arr) {
            if (s.length() > ans.length()) {
                ans = s;
            }
        }

        return ans;
    }
};