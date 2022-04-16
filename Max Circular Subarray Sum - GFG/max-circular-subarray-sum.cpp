// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
  int kadane(int nums[], int n){
        
        // Your code here
        int res=INT_MIN,cursum=0;
        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            res=max(cursum,res);
            if(cursum<0)
            {
                cursum=0;
            }
        }
        return res;
  }
    
    int circularSubarraySum(int arr[], int num){
        
        // your code here
      int maxi=kadane(arr,num);
        if(maxi<0)
            return maxi;
        int sum=0;
        for(int i=0;i<num;i++)
        {
        sum+=arr[i];
            arr[i]=-arr[i];
        }
        int max_circular=sum+kadane(arr,num);
        return max(maxi,max_circular);
//         int res=INT_MIN;
//         int n=nums.size();
   
        
//         for(int i=0;i<n;i++)
//         {
//             int currmax=nums[i];
//             int currsum=nums[i];
        
//         	for(int j = 1; j < n; j++)
// 		{
// 			int index = (i + j) % n;

// 			currsum += nums[index];

// 			currmax = max(currmax, currsum);
// 		}

// 		res = max(res, currmax);
// 	}
// 	return res;
       
    
        
 
        // your code here
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends