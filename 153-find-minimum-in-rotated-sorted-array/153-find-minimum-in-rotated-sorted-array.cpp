class Solution {
public:
    int findMin(vector<int>& nums) {
           
        int min = nums[0];
        
        int last = nums[nums.size()-1];
        
        if(min < last) return min;
        else
        {
            for(int i=1; i<nums.size(); i++)
            {
                if(nums[i] < min)
                {
                    min = nums[i];
                    break;
                }
            }
        }
        
        return min;
    
    }
};