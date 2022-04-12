class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int> x,y;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j]==0)
                {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        for(auto t:x)
            for(int i=0;i<m[0].size();i++)
                m[t][i]=0;
        for(auto t:y)
            for(int i=0;i<m.size();i++)
                m[i][t]=0;
    }
};