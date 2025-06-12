class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        if(n==0) return 1;

        // ye jab tk m 0 nhi hoyega tb tak chalega, jaise hi saare 1 khtm hojayege loop
        //ruk jayega. Mask mai 1 bhi utne hi chahiye the so mask ko 0 lekar 1 se idhar
        //hi OR krdiya. Ab utne no. of 1's aa jayge.
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        //1,0 ka AND 0 hota hai toh sirf 1,1 ka hi 1 ayega baki number fir +ve hojayega.
        int ans = ~(n) & mask;   // YHI KRNA THA MAINLY!!
        return ans;
    }
};