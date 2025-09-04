class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int count_zero = 0;
        int prod_without_zero = 1;

        for(int i = 0; i < n; i++){
            //if the number is zero increase zero counter
            if(nums[i] == 0){
                count_zero++;
            }
            //if it's non-zero take product of numbers in array
            else{
                prod_without_zero *= nums[i]; 
            }
        }

        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                if(count_zero > 0){
                    result[i] = 0;
                }
                else{
                    result[i] = prod_without_zero/nums[i];
                }
            }
            else{
                if(count_zero > 1){
                    result[i] = 0;
                }
                else{
                    result[i] = prod_without_zero;
                }
            }
        }

        return result;

    }
};