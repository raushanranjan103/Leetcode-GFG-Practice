class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        vector<int>res;
        int c=0;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        set<int>s2;
        for(int i=0;i<nums2.size();i++)
        {
            if(s1.find(nums2[i])!=s1.end())
            { res.push_back(nums2[i]);
             s1.erase(nums2[i]);
            }
          
            // res.push_back(nums2[i]);
        }
        // for_each(  s2.begin(),
        //         s2.end(),
        //         [&](const auto & elem){
        //             res.push_back(elem);
        //         });
        return res;
        
    }
};