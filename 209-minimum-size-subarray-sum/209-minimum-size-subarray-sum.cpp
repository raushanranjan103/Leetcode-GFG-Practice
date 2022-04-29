class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int l=0,r=0,n=nums.size(),sum=0;
    
    int ans=INT_MAX;
    
    
    while(r<n&&l<=r)
    {
        if(sum<target)
        {
            sum+=nums[r];
            r++;
        }
       
            while(sum>=target && l<=r )
            {
                ans=min(ans, r-l);
                
                sum-=nums[l];
                
              // cout<<ans<<" ";
                
                
                l++;
                
            }
        
        
       // cout<<sum<<" ";
        
    }
    
    if(ans==INT_MAX)
    {
        return 0;
    }
    
    return ans;
    
    }
};