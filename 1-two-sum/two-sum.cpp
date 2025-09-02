class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> map;

        for(int i = 0; i < n; i++){ //traverse array
            int a = nums[i];     
            int more = target - a;  //take difference to know know the required number to make target

            if(map.find(more) != map.end()){
                return {map[more],i};
            }

            map[a] = i;    //store current number and index.
        }

        return {-1,-1};
    }
};