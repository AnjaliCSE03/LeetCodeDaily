class Solution {
public:
    bool isPerfectSquare(int num) {
        // Constraints: 1 <= num <= 2^31 - 1. num is always positive.
        if (num == 1) {
            return true; // 1*1 = 1, a perfect square.
        }

        int l = 1;
        int r = num; // The square root, if it exists, won't be larger than num.

        while (l <= r) {
            int mid = l + (r - l) / 2;

            // Since l >= 1, mid will always be >= 1.
            // Avoid mid*mid to prevent overflow. Use division.
            int quotient = num / mid; 

            if (quotient == mid) {
                // If num/mid == mid, mid is a candidate.
                // It's a perfect square only if there's no remainder.
                if (num % mid == 0) {
                    return true; // mid * mid == num
                } else {
                    // Example: num = 10, mid = 3. quotient = 3. 10 % 3 = 1.
                    // mid*mid (9) is less than num (10). So mid is too small.
                    l = mid + 1;
                }
            } else if (quotient < mid) {
                // num / mid < mid  implies  num < mid * mid (if mid > 0)
                // So, mid is too large.
                r = mid - 1;
            } else { // quotient > mid
                // num / mid > mid  implies  num > mid * mid (if mid > 0)
                // So, mid is too small.
                l = mid + 1;
            }
        }
        return false; // No integer square root found.
    }
};