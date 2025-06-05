class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int size = nums.size();
        vector<int> arr;
        
        for(int i = 0; i < size; i++){
            int x = nums[i];
            int cnt = count(nums.begin(), nums.end(), x);

            if(cnt == 1){
                arr.push_back(x);
            }
        }
        return arr;
    }
};