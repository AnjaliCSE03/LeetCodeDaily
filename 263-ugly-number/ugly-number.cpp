class Solution {
public:
    bool isUgly(int n) {

        if(n<=0) return false;

        for(int fact : {2,3,5}){
            while(n%fact==0){
                n/=fact;
            }
        }

        return n==1;

    }
};