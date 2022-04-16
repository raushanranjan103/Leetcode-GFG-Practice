class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int curr=INT_MIN;
  for(auto itr=mp.begin();itr!=mp.end();itr++)
  {if(itr->second>floor(nums.size()/3))
  {res.push_back(itr->first);
      
  }
      
  }
        return res;
        
    }
};