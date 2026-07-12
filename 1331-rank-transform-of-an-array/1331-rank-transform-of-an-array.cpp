class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> st = arr;
        sort(st.begin(), st.end());
        int i = 1;
        for (int s : st) {
            if(mp.find(s)==mp.end()){

            mp[s] = i;
            i++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};