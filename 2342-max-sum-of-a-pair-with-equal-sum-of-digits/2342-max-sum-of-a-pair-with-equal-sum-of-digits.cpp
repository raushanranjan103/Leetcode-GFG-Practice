class Solution {
public:
    int maximumSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         unordered_map<int, vector<int>>mpp;
        for(int i=0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            int x = 0;
            for(int j=0; j<str.length(); j++){
                x+=str[j]-'0';
            }
            mpp[x].push_back(nums[i]);
        }
        int ans = INT_MIN;
        for(auto it=mpp.begin(); it!=mpp.end(); it++){
            int sum=0;
            if((it->second).size()>1)
            {
                for(int i=0; i<(it->second).size()-1; i++)
                    sum = max(sum, (it->second)[i]+(it->second)[i+1]);
                ans = max(sum, ans);
            }
        }
        return ans==INT_MIN?-1:ans;
    }
        
    
};