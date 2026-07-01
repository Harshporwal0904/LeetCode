class Solution {
public:
    bool isPalindrome(string s) {
        if(s == " ") return true;
        string n;
        for(char c : s){
            if(isalnum(c)){

            
            
            n += tolower(c);

            }


        }

        int i =0;
        int j = n.size()-1;
        while(i<=j){
            if(n[i] != n[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};