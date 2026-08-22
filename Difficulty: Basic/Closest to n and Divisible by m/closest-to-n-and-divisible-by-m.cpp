class Solution {
  public:
    int closestNumber(int n, int m) {
        int q = n / m;
        int a = q * m;
        int b = (q + (n * m > 0 ? 1 : -1)) * m;
        int diffA = abs(n - a);
        int diffB = abs(n - b);
        if (diffA < diffB) {
            return a;
        }
        else if (diffB < diffA) {
            return b;
        }
        return (abs(a) > abs(b)) ? a : b;
    }
};