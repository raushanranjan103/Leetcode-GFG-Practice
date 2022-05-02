class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
vector<int>res,a,b;
        for(int i:nums)
        {
            if(i%2==0)
            {
                a.push_back(i);
            }
            else 
            {
                b.push_back(i);
            }
        }
        for(int i=0;i<a.size();i++)
        {
            res.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            res.push_back(b[i]);
        }
        return res;
    }
};