class Solution {
public:
    vector<string> extractInt(string& s) {
        vector<string> ans;
        string num = "";
        for (char c : s) {
            if (isdigit(c)) {
                num += c;
            } 
            else {
                if (!num.empty()) {
                    ans.push_back(num);
                    num = "";
                }
            }
        }
        if (!num.empty()) {
            ans.push_back(num);
        }
        return ans;
    }
};