class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
           int d = nums[i][0]*nums[i][0] + nums[i][1]*nums[i][1];
            pq.push({d,{nums[i][0],nums[i][1]}});
                       if(pq.size()>k)
                       {
                           pq.pop();
                       }
                
        }
                    vector<vector<int>>res;
                    vector<int>ans;
                    while(pq.empty()==false)
                    {int x=pq.top().second.first;
                     int y=pq.top().second.second;
                     pq.pop();
                     ans.push_back(x);
                     ans.push_back(y);
                     res.push_back(ans);
                     ans.clear();
                        
                    }
                    return res;
        
    }
};