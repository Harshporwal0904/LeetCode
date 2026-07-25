class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;

        while(n >0){
            int temp = n;
            temp = temp % 10;
            arr.push_back(temp);
            n = n/10;
        }
        int s = arr.size();
        sort(arr.begin(), arr.end());

        return arr[s-2] * arr[s-1];
    }
};