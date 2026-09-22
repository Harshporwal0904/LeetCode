class Solution {
public:
    int reverseDegree(string s) {
        int result = 0;
        int i  = 1;

        for(char c : s){
            int product = 1;
            product = ('z' - c + 1) * i;
            i++;
            result += product; 
        }


        return result;
    }
};