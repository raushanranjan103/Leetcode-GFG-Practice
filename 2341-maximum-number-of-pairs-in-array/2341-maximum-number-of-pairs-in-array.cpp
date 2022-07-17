class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int c1=0,c2=0;
        for( auto i :mpp)
        {
            if(i.second%2!=0)
            {
                c2++;
            }
            if(i.second>=2)
            {
             c1+=i.second/2;
               
            }
            }
         
        
        vector<int>res;
        res.push_back(c1);
        res.push_back(c2);
        return res;
        
    }
};