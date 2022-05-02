// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& nums, int n, long long k) {
         if(k == 0) return 0;
     
        long long  ans = 0;
        long long l = 0, r = 0;
        long long  prod = 1;
        while(r < n){
            prod *= nums[r];
            while(l < n and prod >= k) prod /= nums[l++];
            if(prod < k) ans += r - l + 1;
            r++;
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends