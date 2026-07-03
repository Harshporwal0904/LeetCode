class Solution {
public:
    bool isPerfectSq(int n){
        int root = sqrt(n);
        return root * root == n;
    }
    int numSquares(int n) {
        if(isPerfectSq(n)) return 1;

        while(n % 4 ==0){
            n /= 4;
        }

        if(n % 8 == 7){
            return 4;
        }

        for(int i =0; i *i < n; i++){
            if(isPerfectSq(n - i*i)) return 2;
        }


        return 3;
        
    }
};