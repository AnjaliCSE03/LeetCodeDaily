class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int size = nums.size();

// DONOT USE FOR LOOP RATHER USE WHILE, REDUCES TIME COMPLEXITY AND BEATS 100%.
        while(size != 0){
            int smallest = nums[0];
            int largest = nums[size-1];

            while(largest != 0){
                int temp = largest;
                largest = smallest % largest;
                smallest = temp;
            }
            return smallest;
        }
        return 1;
    }
};