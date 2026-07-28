class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);
        for(char c : s){
            freq[c - 'a']++;
        }
        
        string fHalf = "";
        char mid = '\0';

        for(int i  = 0; i < 26; i++){
            fHalf.append(freq[i]/2, char(i + 'a'));

            if(freq[i] % 2 == 1){
                mid = char(i+'a');
            }
        }

        string sHalf  = fHalf;
        reverse(sHalf.begin(), sHalf.end());
        
        if (mid == '\0')
            return fHalf + sHalf;

        return fHalf + mid + sHalf;
    }
};