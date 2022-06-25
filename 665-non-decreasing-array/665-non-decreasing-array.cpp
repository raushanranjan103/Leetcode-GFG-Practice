class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int c=0;
        unordered_map<int,int>mp;
       
        for(int i=0;i<nums.size()-1;i++)
        {if(nums[i]>nums[i+1])
        c++;
         if (c > 1 || (i > 0 and i < nums.size() - 2 and nums[i - 1] > nums[i + 1] and nums[i] > nums[i + 2])) {
                    return false;
            
        }
        }
        
        if(c>1)
            return  false;
        else
            return true;
    }
};