class Solution {
public:
    int maxArea(vector<int>& height) {

        int c=-1;
       int n=height.size();
        int l=0,r=n-1;
    while(l<r)
    {
        int l1=height[l];
        int l2=height[r];
        c=max(min(l1,l2)*(r-l),c);
        if(l1<l2)
        l++;
        else
        r--;
    }
    return c;
//           int n=height.size();
//         int low=0, high=n-1;
//         int ans=0;
//         while(low<high){
//             int x=min(height[low], height[high])*(high-low);
//             ans=max(x, ans);
//             if(height[low] < height[high])
//                 low++;
//             else
//                 high--;
//         }
//         return ans;
        
    }
};