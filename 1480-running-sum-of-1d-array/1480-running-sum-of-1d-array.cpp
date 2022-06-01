class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>rs(nums.size());
        rs.clear();
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            rs.push_back(sum);
        }
        return rs;
        
    }
};