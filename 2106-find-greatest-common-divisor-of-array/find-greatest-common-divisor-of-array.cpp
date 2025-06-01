class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int size = nums.size();

        for(int i = 0; i < size; i++){
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