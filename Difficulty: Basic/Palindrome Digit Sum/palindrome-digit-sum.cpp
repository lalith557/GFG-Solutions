class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        int sum = 0;
        int temp = n;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        int original = sum;
        int reverse = 0;
        while (sum > 0) {
            reverse = reverse * 10 + sum % 10;
            sum /= 10;
        }
        return original == reverse;
    }
};