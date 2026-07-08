class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double maxAvg = INT_MIN;
        // for(int i = 0; i+k <= nums.size(); i++){
        //     double sum = 0;
        //     for(int j = i; j <= i+k-1; j++){
        //         sum += nums[j];

        //     }
            
        //     if(maxAvg < sum/k) maxAvg = sum/k;            
        // }


        // return maxAvg;

        int windowSum = 0;
        for(int i  = 0; i < k; i++){
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        for(int i  =k; i < nums.size(); i++){
            windowSum += nums[i];
            windowSum -= nums[i-k];

            maxSum = max(maxSum, windowSum);
        }


        return (double)maxSum/k;

        
    }
};