class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
          int  n = grid.size() ;
        int ans=0;
        
        for(int row = 0 ; row < n ; ++row ){
            for(int col = 0 ; col < n ; ++col ){
                
                bool equal = true ;
                for(int i = 0 ; i < n ; ++i ){
                    if(grid[row][i] != grid[i][col]){
                        equal = false;
                        break ;
                    }
                }
                ans += (equal == true) ;
            }
        }
        return ans;  
        
    }
};