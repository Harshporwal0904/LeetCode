class Solution {
public:
    bool isHappy(int n) {
        if(n ==1 || n == 7) return true;

        while(n>9){
            int sum = 0;
            while(n >0){
                int temp = n % 10;
                sum += temp * temp;
                n= n/10;
            }
            if(sum == 1 || sum == 7) return true;
            n=sum;
            
        }



        return false;

    }
};