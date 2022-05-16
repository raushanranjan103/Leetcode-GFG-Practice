class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        set<vector<int>> s;
        vector<int> temp = nums;
        do
        {
            next_permutation(temp.begin(), temp.end());
            s.insert(temp);
        } while (temp != nums);
        vector<vector<int>> ans;
        for (auto it: s)
            ans.push_back(it);
        return ans;
    }
};