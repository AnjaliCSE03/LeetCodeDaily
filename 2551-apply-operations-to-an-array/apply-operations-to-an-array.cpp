class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }else{
                continue;
            }
        }

        int l = 0;
        for(int r = 0; r < n; r++){     // moving non zero elements to front
            if(nums[r] != 0){
                nums[l] = nums[r];
                l++;
            }
        }

        while (l < n) {
            nums[l] = 0;
            l++;
        }

        return nums;
        
    }
};