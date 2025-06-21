class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while(i < n){
            
            int j = i+1;
            while(j < n && chars[i] == chars[j]){
                j++;
            }

            //storing old character which is at i and storing it at its index when it first occured.
            chars[ansIndex++] = chars[i];

            //count of character
            int count = j-i;

            if(count>1){
                string cnt = to_string(count);
                for(char ch : cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i=j;

        }

        return ansIndex;

    }
};