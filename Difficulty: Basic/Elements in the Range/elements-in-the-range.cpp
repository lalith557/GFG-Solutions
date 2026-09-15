class Solution {
public:
    bool checkElements(int start, int end, vector<int>& arr) {

        for (int i = start; i <= end; i++) {
            bool found = false;

            for (int x : arr) {
                if (x == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return false;
            }
        }

        return true;
    }
};