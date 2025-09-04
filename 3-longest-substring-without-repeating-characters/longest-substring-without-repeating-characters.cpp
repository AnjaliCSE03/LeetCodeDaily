class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen = 0, l = 0, r = 0;
        vector<int> hash(256, -1);

        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            int len = r-l+1;
            maxlen = max(len,maxlen);
            hash[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};