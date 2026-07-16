class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long sum = 0;
        vector<int> prefixGcd;
        int mx = 0;
        for(int i  = 0; i < nums.size(); i++){
            mx = max(mx, nums[i]);
            prefixGcd.push_back(gcd(mx, nums[i]));
        }

        
        sort(prefixGcd.begin(), prefixGcd.end());

        int i = 0; 
        int j = prefixGcd.size()-1;
        while(i < j){
            sum += gcd(prefixGcd[i], prefixGcd[j]);

            i++;
            j--;
        }

        return sum;


        

    }
};