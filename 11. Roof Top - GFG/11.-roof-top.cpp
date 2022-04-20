// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int arr[], int n)
    {
       int maxi=0;
      int count=0;
      if(n==1)
      return 0;
      
      for(int i=1;i<n;i++){
          if(arr[i-1]<arr[i])
           { count++;
            
              maxi=max(count,maxi);}
            else
            {
        
              count=0;
            }
      }
       
     
      return maxi; 
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}  // } Driver Code Ends