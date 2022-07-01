// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,ans;
        while(s<=n){
            int mid=s+(n-s)/2;
            if(isBadVersion(mid)){
                ans=mid;
                n=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
};