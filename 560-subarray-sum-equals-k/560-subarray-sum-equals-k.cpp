class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //     unordered_map<int,int> umap;
    //     int count=0, sum=0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         sum+=nums[i];
    //         if(sum==k)
    //             count++;
    //         if(umap.find(sum-k)!=umap.end())
    //             count+=umap[sum-k];
    //         umap[sum]++;
    //     }
    //     return count;
    // }
        	
// 	int curr_sum = nums[0], start = 0, i,count=0;

	
// 	for (i = 1; i <= nums.size(); i++) 
// 	{ 
	
// 		while (curr_sum > sum && start < i-1) 
// 		{ 
// 			curr_sum = curr_sum - nums[start]; 
// 			start++; 
// 		} 

		
// 		if (curr_sum == sum) 
// 		{ 
// 			count++;
//         }

	
// 		if (i < nums.size()) 
// 		curr_sum = curr_sum + nums[i]; 
//     }
//         return count;
         unordered_map<int,int>m;
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum == k)
                count++;
            if(m.find(sum - k) != m.end())
                count+=m[sum-k];
            m[sum]++;
        }
        return count;
	} 
};