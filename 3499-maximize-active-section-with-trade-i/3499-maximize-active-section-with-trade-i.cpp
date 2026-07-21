class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();

        int countones = 0;

        for(int i  = 0; i < n; i++){
            if(s[i] == '1') countones++;
        }

        vector<int> zblocks;
        int i =0;
        while(i<n){
            if(s[i] == '0'){
                int start = i;
                while(i < n && s[i] == '0') i++;

                zblocks.push_back(i-start);
            }
            else i++;
        }

        int mx = 0;
        for(int i = 0; i+1 < zblocks.size(); i++){
            int m = zblocks[i] + zblocks[i+1];
            mx = max(mx, m);

        }

        return mx + countones;
    }
};