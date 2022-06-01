class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        //std::vector<int>::iterator upper1,low1;
        auto low1 = std::lower_bound(v.begin(), v.end(),target);
        vector<int>ans;
        if(binary_search(v.begin(), v.end(), target))
        {
        ans.push_back(low1-v.begin());
            auto upper1 = std::upper_bound(v.begin(), v.end(),target);
        ans.push_back((upper1-v.begin())-1);
        }
        else
        {
            ans.push_back(-1);
            ans.push_back(-1);
            
        }
        return ans;
       
    }
};