class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int n=height.size();
        // for(int i=1;i<n-1;i++)
        // {
        //     int lmax=height[i];
        //     for(int j=0;j<i;j++)
        //     {
        //         lmax=max(lmax,height[j]);
        //     }
        //     int rmax=height[i];
        //     for(int j=i;j<n;j++)
        //     {
        //         rmax=max(rmax,height[j]);
        //     }
        //     res+=(min(lmax,rmax)-height[i]);
        // }
        // return res;
        vector<int>lmax(n),rmax(n);
        lmax[0]=height[0];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(height[i],lmax[i-1]);
        }
        rmax[n-1]=height[n-1];
        
           for(int i=n-2;i>=0;i--)
        {
            rmax[i]=max(height[i],rmax[i+1]);
        }
        for(int i=1;i<n-1;i++)
        { res+=(min(lmax[i],rmax[i])-height[i]);
        }
        return res;
        
    }
};