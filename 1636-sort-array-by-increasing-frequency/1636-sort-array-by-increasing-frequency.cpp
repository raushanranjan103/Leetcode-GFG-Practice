class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {mpp[nums[i]]++;
        
        }
        for(auto i:mpp)
        {
            pq.push(make_pair(-1*i.second,i.first));
            
        }
        
        vector<int>ress;
        while(pq.size()>0)
        {int a=-1*pq.top().first;
         int b=pq.top().second;
         for(int i=1;i<=a;i++)
         {
             ress.push_back(b);
         }
         pq.pop();
            
        }
        return ress;
        
        
    }
};