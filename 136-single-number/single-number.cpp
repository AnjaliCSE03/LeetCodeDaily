class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int size = nums.size();
        
        for(int i = 0; i <= size; i++){
            int x = nums[i];
            int cnt = count(nums.begin(), nums.end(), x);
            if(cnt == 1){
                return x;
            }
        }
        return -1;
    }
};