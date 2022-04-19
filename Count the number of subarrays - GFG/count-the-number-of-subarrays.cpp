// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution {
  public:
//  long long int findSubarraySum(vector<int>&A, int n, int sum)
// {
    
//     unordered_map<int, int> prevSum;
 
//     long long int res = 0;
 
    
//     long long int currsum = 0;
 
//     for (int i = 0; i < n; i++) {
 
//         currsum += A[i];
 
       
//         if (currsum == sum)
//             res++;
 
//         if (prevSum.find(currsum - sum) != prevSum.end())
//             res += (prevSum[currsum - sum]);
 
       
//         prevSum[currsum]++;
//     }
 
//     return res;
// }
long long int help(int n, vector<int>&a, long long int num)
  {
      long long int st=0;
      long long int ans =0;
      long long int sum=0;
      for(long long int ed=0;ed<n;ed++)
      {
          sum+=a[ed];
          
          while(sum>num)
          {
              sum-=a[st];
              st++;
          }
          
          ans += ed-st+1;
      }
      return ans;
  }
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        return help(N,A,R)-help(N,A,L-1);
    }
   
        
        // long long int r=findSubarraySum(A,N,R);
        //  long long int l=findSubarraySum(A,N,L-1);
        //  cout<<r<<" "<<l;
        //  return (r-l);
        // // code here
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}    // } Driver Code Ends