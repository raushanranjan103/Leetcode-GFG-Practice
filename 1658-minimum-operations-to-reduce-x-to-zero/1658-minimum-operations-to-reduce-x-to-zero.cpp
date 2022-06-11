class Solution {
public:
    int minOperations(vector<int>& nums, int x) {int n=nums.size();
        int res=INT_MIN;
        int totalSum=0, sum=0, j=0;
        
        for(auto i:nums) totalSum+=i;
        
        int target=totalSum-x;
        
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(sum>target)
            {
                while(sum>target&&j<=i)
                {
                    sum-=nums[j];
                    j++;
                }
            }
            if(sum==target)
                res=max(res, i-j+1);
        }
        
        return res==INT_MIN?-1:n-res;
        
    }
};