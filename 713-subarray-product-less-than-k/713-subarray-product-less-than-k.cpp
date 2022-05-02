class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0) return 0;
        int n = nums.size();
        int ans = 0;
        int l = 0, r = 0;
        int prod = 1;
        while(r<n){
            prod *= nums[r];
            while(l < n and prod >= k) prod /= nums[l++];
            if(prod < k) ans += r - l + 1;
            r++;
        }
        return ans;
        
    }
};