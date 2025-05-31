class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int size = nums.size();
        int a;
        
        for(int i = 0; i <= size; i++){
            int x = nums[i];
            int cnt = count(nums.begin(), nums.end(), x);
            if(cnt == 1){
                return x;
            }
            a = x;
        }
        return a;
    }
};