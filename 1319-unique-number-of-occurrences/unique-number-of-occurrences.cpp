class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        int n = arr.size();
        vector<int> count (2001, 0);

        for(int i = 0; i < n; i++)
        {
            count[arr[i] + 1000]++;
        }

        sort(count.begin(), count.end());

        int i = 0;

        while(count[i] == 0)
        {
            i++;
        }

        for(int k = i; k < 2000; k++)
        {
            if(count[k] == count[k + 1])
            {
                return false;
            }
        }

        return true;
    }
};