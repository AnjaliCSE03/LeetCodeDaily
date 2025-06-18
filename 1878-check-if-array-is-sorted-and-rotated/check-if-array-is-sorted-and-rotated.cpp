class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;

        for(int i = 1; i < n; i++){

            if(nums[i-1] > nums[i]){
                count++;
            }
        }

        if(nums[n-1] > nums[0])    // it cant be written inside the loop as this doesnot check the value
            count++;              // After first if the loop ends and never checks second if.

        return count<=1;
    }
};