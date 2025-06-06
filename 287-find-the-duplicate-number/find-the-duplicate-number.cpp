class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> cnt(n,0);   // Here n=size of array, 0 = every element is zero.

        for(int i = 0; i < n; i++){
            cnt[nums[i]]++;
        }

        for(int j = 0; j < n; j++){
            if(cnt[j] > 1){
                return j;
            }
        }
        return 0;
    }
};