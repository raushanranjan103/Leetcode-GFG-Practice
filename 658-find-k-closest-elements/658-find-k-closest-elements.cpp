class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//           multimap<int,int>m;
         vector<int>ans;
        
//         for(int i=0;i<arr.size();i++)
//         {
//             int temp=arr[i]-x;
//             if(temp<0)
//                 temp=-temp;
            
//             m.insert({temp,i});
//         }
        
//         auto id=m.begin();
        
//         while(k>0)
//         {
//             ans.push_back(arr[id->second]);
//             ++id;
//             --k;
   //     while()
//         }
        
        
//         sort(ans.begin(),ans.end());
        
//         return ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
                pq.pop();
        }
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            
            pq.pop();
        }
     sort(ans.begin(),ans.end());
    return ans;
    }
};