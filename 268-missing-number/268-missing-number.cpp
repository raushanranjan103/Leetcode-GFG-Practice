class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
      set<int>s;
      for(int i=0;i<n;i++)
      {
          s.insert(nums[i]);
      }
      int flag=0;
      for(int i=0;i<=n;i++)
      {
          if(s.find(i)!=s.end())
          {
              
              flag=n+1;
              continue;
          }
          else if(s.find(i)==s.end())
          {flag=i;
          break;
          
              
          }
      }
      return flag;
        
    }
};