#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int candidate = nums[i];
            int cnt = count(nums.begin(), nums.end(), candidate);

            if (cnt > n / 2) {
                return candidate;
            }
        }

        return -1; // Should never hit if majority always exists
    }
};
