class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        unordered_map<char, int> mp;

        int i = 0;
        int mx = 0;

        for (int j = 0; j < s.size(); j++) {

            mp[s[j]]++;

            while (mp[s[j]] > 2) {
                mp[s[i]]--;
                i++;
            }

            mx = max(mx, j - i + 1);
        }

        return mx;
    }
};