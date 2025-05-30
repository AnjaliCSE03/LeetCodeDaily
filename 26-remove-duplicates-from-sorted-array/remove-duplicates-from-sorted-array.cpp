class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int size = nums.size();
        int l = 1;
        
        if(size ==0){
            return 0;
        }

        for(int i = 1; i < size; i++){
            if(nums[i] != nums[i-1]){
                nums[l] = nums[i];
                l++;
            }
        }
        return l;
        
    }
};