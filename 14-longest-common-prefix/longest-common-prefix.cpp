class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        //For empty string.
        if(strs.empty()){
            return "";
        }

        //If there is one string and it itself is the longest common prefix.
        if(strs.size()==1){
            return strs[0];
        }

        string str_f = strs[0];
        int size = strs.size();
        for(int i = 0; i < str_f.length(); i++){
            char curr_char = str_f[i];

            for(int j = 0; j < size; j++){
                if(i >= strs[j].length() || strs[j][i] != curr_char){
                    return str_f.substr(0,i);
                }
            }
        }
        return str_f;
    }
};