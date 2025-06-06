class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int x;
        for(int i = 0; i < size; i++){
            int a = nums[i];
            if(a != i){
                return i;
                i=x;
            }
        }
        return x;
    }
};