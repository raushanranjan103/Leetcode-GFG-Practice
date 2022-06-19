class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        
        for(auto current : nums)
        {
            if(current <= first)
            {
                first = current;
            }
            else if(current <= second)
            {
                second = current;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};