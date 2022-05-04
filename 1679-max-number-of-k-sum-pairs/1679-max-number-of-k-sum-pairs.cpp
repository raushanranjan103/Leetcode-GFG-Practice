class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,r=nums.size()-1;
        int c=0;
        while(i<r)
        {
            if(nums[i]+nums[r]==k)
            {
                i++;
                r--;
                c++;
            }
           else if(nums[i]+nums[r]>k)
            {
                r--;
            }
            else
            {
                i++;
            }
            
        }
        return c;
        
    }
};