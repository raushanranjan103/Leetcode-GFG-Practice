class Solution {
public:
    int kadane(vector<int>&nums)
    {
        int res=INT_MIN,cursum=0;
        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];
            res=max(cursum,res);
            if(cursum<0)
            {
                cursum=0;
            }
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
//         int res=INT_MIN;
//         int n=nums.size();
   
        
//         for(int i=0;i<n;i++)
//         {
//             int currmax=nums[i];
//             int currsum=nums[i];
        
//         	for(int j = 1; j < n; j++)
// 		{
// 			int index = (i + j) % n;

// 			currsum += nums[index];

// 			currmax = max(currmax, currsum);
// 		}

// 		res = max(res, currmax);
// 	}
// 	return res;
        int maxi=kadane(nums);
        if(maxi<0)
            return maxi;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
        sum+=nums[i];
            nums[i]=-nums[i];
        }
        int max_circular=sum+kadane(nums);
        return max(maxi,max_circular);
        
    
        
    }
};