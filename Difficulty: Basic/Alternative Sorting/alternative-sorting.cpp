class Solution {
public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<int> ans;

        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            if (left == right) {
                ans.push_back(arr[left]);
            }
            else {
                ans.push_back(arr[right]);
                ans.push_back(arr[left]);
            }

            right--;
            left++;
        }

        return ans;
    }
};