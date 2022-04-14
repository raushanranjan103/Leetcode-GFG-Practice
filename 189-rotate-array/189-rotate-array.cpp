class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
          vector<int>res(nums.size());
         int n=nums.size();
         for(int i=0;i<n;i++)
          {
             res[(i+k)%(n)]=nums[i];
          }
          nums=res;
        
    }
};