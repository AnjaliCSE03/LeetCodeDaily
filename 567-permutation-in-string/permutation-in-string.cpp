bool checkEqual(int a[], int b[]){
    for(int i = 0; i < 26; i++){
        if(a[i] != b[i]){   // Always check for !=.
            return 0;
        }
    }
    return 1;
}


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int windowSize = s1.length();
        int n = s2.length();
        int count1[26] = {0};

        if(windowSize > n){
            return false;
        }

        //keeping count of elements in s1
        for(int i = 0; i < windowSize; i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        //traversing through s2 in window

        int count2[26] = {0};
        int i = 0;

        while(i < windowSize){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        //comparing arrays
        if(checkEqual(count1, count2)){
            return 1;
        }

        //move forward

        while(i < s2.length()){

            int newChar = s2[i] - 'a';
            count2[newChar]++;

            int oldChar = s2[i-windowSize] - 'a';
            count2[oldChar]--;

            i++;

            if(checkEqual(count1, count2)){
                return true;
            }

        }

        return false;

    }
};