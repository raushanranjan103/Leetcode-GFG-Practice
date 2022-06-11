class Solution {
public:
    int specialArray(vector<int>& nums) {
       int size=nums.size();
        int n;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums[nums.size()-1];i++)
        {
             auto t=lower_bound(nums.begin(),nums.end(),i)-nums.begin();
            cout<<t<<endl;
           if((nums.size()-t)==i)return i;
        }
    return -1;
    
        
    }
};