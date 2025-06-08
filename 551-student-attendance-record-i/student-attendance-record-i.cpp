class Solution {
public:
    bool checkRecord(string s) {
        int l = s.length();
        int absent = 0;

        for(int i = 0; i < l; i++){
            if(s[i]=='A'){
                absent++;
                if(absent>=2) return false;
            }
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                return false;
            }
        }
        return true;
    }
};