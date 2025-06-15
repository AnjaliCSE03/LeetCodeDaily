class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int s = 0, e = arr.size()-1;
        int mid = s + (e-s)/2;
        int ans;

        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s = mid+1;
                ans = mid;
            }else{
                e = mid;
                ans = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};