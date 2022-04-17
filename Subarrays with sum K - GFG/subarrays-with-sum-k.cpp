// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int nums[], int n, int k)
    {int c= 0;
        
       unordered_map<int,int> m;
       int sum=0;
       for(int i = 0;i<n;i++){
           sum+=nums[i];
           if(sum==k)
               c++;
           if(m.find(sum-k)!=m.end())
               c+=m[sum-k];
           
           m[sum]++;
       }
       return c;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends