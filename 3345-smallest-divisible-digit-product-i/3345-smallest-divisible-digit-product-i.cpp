class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {

        int temp = 1;
        int dig = n;

        while (dig > 0) {
            int d = dig % 10;
            temp *= d;
            dig /= 10;
        }

        if (temp % t == 0)
            return n;

        n++;

        }
    }
};