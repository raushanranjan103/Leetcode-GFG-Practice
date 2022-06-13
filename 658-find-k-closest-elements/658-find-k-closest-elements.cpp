class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          multimap<int,int>m;
        vector<int>ans;
        
        for(int i=0;i<arr.size();i++)
        {
            int temp=arr[i]-x;
            if(temp<0)
                temp=-temp;
            
            m.insert({temp,i});
        }
        
        auto id=m.begin();
        
        while(k>0)
        {
            ans.push_back(arr[id->second]);
            ++id;
            --k;
        }
        
        
        sort(ans.begin(),ans.end());
        
        return ans;
    
    }
};