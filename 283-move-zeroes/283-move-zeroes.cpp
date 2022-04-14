class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      //   int index=0;
      // for(int i=0;i<nums.size();i++){
      //   if(nums[i]!=0){
      //     nums[index++]=nums[i];
      //   }
      // }
      // for(int i=index;i<nums.size();i++){
      //   nums[i]=0;
      // }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                    {swap(nums[i],nums[j]);
                     break;
                    }
                }
            }
            
        }
    }
};