class Solution {
public:
    bool checkDivisibility(int n) {
        int dsum = 0;
        int Prod = 1;
        int sum = 0;
        int t = n;
        while(t > 0){
            int temp  = t % 10;
            dsum += temp;
            Prod *= temp;
            t = t/10;
        }


        sum  = dsum + Prod;

        if(n % sum == 0) return true;

        return false;
    }
};