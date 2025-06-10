class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int max_count = 0;

        for(int num : nums){
            if(num==1){
                count++;
                max_count = max(max_count,count);              
            }
            else{
                count = 0;
            }
        }
        return max_count;
    }
};