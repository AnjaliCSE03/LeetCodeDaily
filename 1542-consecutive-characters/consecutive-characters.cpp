class Solution {
public:
    int maxPower(string s) {
        int l = s.length();
        int cnt = 1;
        int max = 1;

        if(l==1){return 1;}

        for(int i = 0; i < l; i++){
            if(s[i]==s[i+1]){
                cnt++;
            }else {
                if(cnt > max){
                    max = cnt;
                }
                cnt = 1;
            }
        }
        if(cnt > max){
            max = cnt;
        }
        return max;
    }
};