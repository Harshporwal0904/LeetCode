class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);

        for(char c : word){
            freq[c-'a']++;
        }

        sort(freq.begin(), freq.end(), greater<>());

        int count = 0;

        for(int i  = 0; i < freq.size(); i++){
            if(i<8) count += freq[i];
            else if(i < 16) count += freq[i] * 2;
            else if(i < 24) count += freq[i] * 3;
            else count += freq[i] * 4;

        }

        return count;
    }
};