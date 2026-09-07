class Solution {
  public:
    int sumSqEven(int n) {
        // code here
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int even = 2 * i;
            sum += even * even;
        }
        return sum;
    }
};