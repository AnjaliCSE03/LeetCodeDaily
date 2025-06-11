class Solution {
public:

    int romanToInt(string s) {

        unordered_map<char, int> roman_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total = 0;

        int l = s.length();
        //Inside the loop, you access s[i+1]. When i becomes l-1 (the last character's index), +1 
        //becomes l. Accessing s[l] is out of bounds for a string of length l (valid indices are 0 
        //to l-1). This will lead to a runtime error.

        for(int i = 0; i < l-1; i++){
            int curr = roman_map[s[i]];
            int next = roman_map[s[i+1]];
            if(curr<next){
                total -= curr;       //DONOT use total = curr (+/-) next as it overwrites total in 
                                    //each iteration and doesnt accumulate the sum
            }else{
                total += curr;
            }
        }
        total += roman_map[s[l-1]];
        return total;
    }
};