class Solution {
public:
    int mySqrt(int x) {

        if(x < 2) return x;

        int ans =1;

        for(int i = 1; i <= x/i; i++){
            if(x == i*i){
                return i;
            }
            ans = i;
        }

        return ans;
    }
};