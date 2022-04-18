// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_map<int,int> m;
     int pre_sum=0;int res=0;
     for(int i=0;i<n;i++){
         pre_sum+=arr[i];
         
         if(pre_sum==sum){
             res++;
         }
         
         if(m.find(pre_sum-sum) != m.end()){
             res+=m[pre_sum-sum];
         }
         
         m[pre_sum]++;
     }
     return res; //Your code here
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends