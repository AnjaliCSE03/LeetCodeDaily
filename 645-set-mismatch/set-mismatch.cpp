class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        vector<int> x(n+1,0);
        int duplicate, missing;

        for(int i = 0; i < n; i++){
            x[nums[i]]++;
        }

        for(int i = 0; i < n+1; i++){ //loop goes till n as size of x[] is n+1
            if(x[i]==2){
                duplicate = i;
            }else if(x[i]==0){
                missing = i;
            }
        }
        return {duplicate,missing};
    }
};