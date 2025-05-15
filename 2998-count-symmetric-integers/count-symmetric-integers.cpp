class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++) {
            std::string numStr = std::to_string(i);
            int len = numStr.length();

            if(len % 2 != 0) continue;

            int half = len / 2;
            int sum1 = 0, sum2 = 0;

            for(int j = 0; j < half; j++) {
                sum1 += numStr[j] - '0';
                sum2 += numStr[half + j] - '0';
            }

            if(sum1 == sum2) {
                count++;
            }
        }
        return count;
    }
};
