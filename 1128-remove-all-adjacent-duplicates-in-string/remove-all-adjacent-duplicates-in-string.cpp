class Solution {
public:
    string removeDuplicates(string s) {

        int l = s.length();
        int i = 0;

        while(i < l){
            while(s[i] == s[i+1] && i+1<l){
                s.erase(i,2);

                if(i>0){
                    i--;
                }
            }
            i++;
        }
        return s;
        
    }
};