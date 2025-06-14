class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> duplicates;

        if(n < 2){return duplicates;}

        for(int i = 0; i < n-1; i++){
            int x = nums[i]^nums[i+1];
            if(x==0){
                duplicates.push_back(nums[i]);
            }
        }

        return duplicates;
    }
};