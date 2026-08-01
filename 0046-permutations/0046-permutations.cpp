class Solution {
public:
    void backtrack(vector<vector<int>> &ans,vector<int> &temp, vector<int> &nums, vector<bool> &check){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(check[i]) continue;
            temp.push_back(nums[i]);
            check[i] = true;

           backtrack(ans, temp, nums, check);

           check[i] = false;

           temp.pop_back();
        }
}

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> check(nums.size(), false);


        backtrack(ans, temp, nums,check);


        return ans;





    }
};