class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        
        while(k--){

            int temp = grid[0][0];
            for(int i = 0; i < n ; i++){
                for(int j = 0; j < m; j++){
                    swap(temp, grid[i][j]);

                }
            }
            grid[0][0] = temp;
        }
        return grid;
    }
};