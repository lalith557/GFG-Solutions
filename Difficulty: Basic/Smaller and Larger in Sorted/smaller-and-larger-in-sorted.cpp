class Solution {
public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        int left = 0;
        int right = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= target) {
                left++;
            }

            if (arr[i] >= target) {
                right++;
            }
        }

        return {left, right};
    }
};