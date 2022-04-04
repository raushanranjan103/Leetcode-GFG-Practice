class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      int n =nums.size();
        int t=pow(2,n);
        vector<vector<int>>res;
        //ctor<int>ans;
        for(int i=0;i<t;i++)
        { vector<int>ans;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))!=0)
                {
                   ans.push_back(nums[j]);
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};