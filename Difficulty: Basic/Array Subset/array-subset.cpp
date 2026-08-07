class Solution {
  public:
    bool isSubset(std::vector<int> &a, std::vector<int> &b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0;
        int j = 0; 
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                i++;
                j++;
            } else if (a[i] < b[j]) {
                i++;
            } else {
                return false;
            }
        }
        return (j == b.size());
    }
};
