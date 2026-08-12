class Solution {
public:
    
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int i = 0;
        int j = 0;
        int mx = -1;
        while(j<nums.size()){
            if(mp[nums[j]]==k){
                while(i<=j && mp[nums[j]]==k){
                    mp[nums[i]]--;
                    i++;
                }
            }
            mx = max(mx, (j-i+1));
            mp[nums[j]]++;
            // i++;
            j++;
        }
        return mx;
    }
};
    