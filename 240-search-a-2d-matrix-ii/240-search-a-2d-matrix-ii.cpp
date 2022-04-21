class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int  m=matrix[0].size();
        int i=0,r=m-1;
        while(i<n&&r>=0)
        {
            if(matrix[i][r]>target)
                r--;
            else if(matrix[i][r]==target)
                return true;
            else
                i++;
        }
        return false;
    }
};