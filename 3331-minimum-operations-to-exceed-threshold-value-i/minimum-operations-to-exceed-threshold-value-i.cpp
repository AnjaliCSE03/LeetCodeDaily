class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int size = nums.size();
        int count = 0;

        for(int i = 0; i < size; i++){
            if(nums[i] < k){
                count++;
            }   
        }
        return count;
    }
};