class Solution {
public:

    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();

        if(nums.empty()){
            return -1;
        }

        long long total = 0;
        for(int i = 0; i < n; i++){
            total += nums[i];
        }

        long long left_sum = 0;
        for(int j = 0; j < n; j++){
            long long right_sum = total - left_sum - nums[j];

            if(left_sum==right_sum){
                return j;
            }

            left_sum += nums[j];
        }
        return -1;
    }
};