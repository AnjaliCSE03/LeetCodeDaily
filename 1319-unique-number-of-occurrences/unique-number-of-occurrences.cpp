class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        vector<int> cnt;
        int i = 0;

        while(i < n){
            int count = 1;    // shows element exists

            while(i+1 < n && arr[i] == arr[i+1]){        //compares element in arr, j=i+1, won't 
                    count++;                             //compare same
                    i++;                               //elemnts like, arr[0]==arr[0], which gives
            }                                          // incorrect answer.
            cnt.push_back(count);    
            i++;                        
        }

       sort(cnt.begin(), cnt.end());

        for(int i = 0; i < cnt.size()-1; i++){
            if(cnt[i]==cnt[i+1]){
                return false;
            }
        }
        return true;
    }
};



// "while (i + 1 < n && arr[i] == arr[i + 1])"

// keeps counting how many times the same number repeats, incrementing i as long as the next number is the same.

// Once it finds a different number or reaches the end:

// It exits the inner loop, but i is still pointing at the last occurrence of the repeated number.

// So we do one final i++ after the inner loop to move to the next new number.


// j < n-2 because consider size = 5; j = 0,1,2,3,4(for n-1)

// cnt[0] with cnt[1]

// cnt[1] with cnt[2]

// cnt[2] with cnt[3]

// cnt[3] with cnt[4]

// cnt[4] with cnt[5], this will cause error.