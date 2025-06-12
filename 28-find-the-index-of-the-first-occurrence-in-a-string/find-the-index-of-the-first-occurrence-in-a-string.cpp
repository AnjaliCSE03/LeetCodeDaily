class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = haystack.length();
        int len = needle.length();

        for(int i = 0; i < l; i++){
            if(haystack.substr(i,len) == needle){
                return i;
            }
        }
        return -1;
    }
};