class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        int size = nums.size();
        int total = 0;
        int left_sum =0;

        for(int i = 0; i < size; i++){
            total += nums[i];
        }

        for(int i = 0; i < size; i++){
            if(left_sum == total - left_sum - nums[i]){
                return i;
            }
            left_sum += nums[i];
        }

        return -1;
        
    }
};