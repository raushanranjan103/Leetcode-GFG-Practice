// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        unordered_map<int,int> m;
     int pre_sum=0;int res=0;
     for(int i=0;i<n;i++){
         pre_sum+=arr[i];
         
         if(pre_sum==0){
             res++;
         }
         
         if(m.find(pre_sum) != m.end()){
             res+=m[pre_sum];
         }
         
         m[pre_sum]++;
     }
     return res;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends