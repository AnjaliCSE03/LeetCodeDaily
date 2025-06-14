// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        int ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (isBadVersion(mid)) {
                ans = mid;        // potential answer
                r = mid - 1;      // search left half
            } else {
                l = mid + 1;      // search right half
            }
        }

        return ans;
    }
};
