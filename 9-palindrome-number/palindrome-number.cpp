class Solution {
public:
    bool isPalindrome(int x) {
        int check = 0;

        if(x < 0){return false;}

        if (x % 10 == 0 && x != 0) {
            return false;
        }

        while(x>check){
            int digit = x%10;
            check = check*10 + digit;
            x /= 10;
        }

        if(check == x || check/10 == x){return true;}
        else return false;
    }
};