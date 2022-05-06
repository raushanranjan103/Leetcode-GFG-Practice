class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c=0,r=0,k=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                c++;
            if(nums[i]==1)
                r++;
        }
        for(int i=0;i<c;i++)
        {nums[i]=0;
         
        }
        for(int i=c;i<c+r;i++)
        {nums[i]=1;
            
        }
        for(int i=c+r;i<nums.size();i++)
        {
            nums[i]=2;
        }
        
    }
};