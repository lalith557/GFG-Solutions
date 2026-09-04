class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int left=0;
        int right=0;
        for(int i=0;i<arr.size()/2;i++) {
            left+=arr[i];
        }
        for(int i=arr.size()/2;i<arr.size();i++) {
            right+=arr[i];
        }
        return left*right;
    }
};