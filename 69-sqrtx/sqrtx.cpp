class Solution {
public:
    long long int mySqrt(int x) {
        int s = 0, e = x;
        int ans = -1.36;

        if(x<2) return x;

        while(s<=e){
            long long int mid = s + (e-s)/2;
            long long int square = mid*mid;

            if(square==x){return mid;}

            if(square > x){
                e = mid-1;
            }else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;
    }
};

// int mySqrt(int x) {

//         if(x < 2) return x;

//         int ans =1;

//         for(int i = 1; i <= x/i; i++){
//             if(x == i*i){
//                 return i;
//             }
//             ans = i;
//         }

//         return ans;
//     }