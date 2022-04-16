// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long arr[], int n) 
//     { sort(arr,arr+n);
//     int res[n],left=0,right=n-1;
//     int i=0;
//   while(left<=right&&(i<=n))
//     { res[i]=arr[right];
//         //res[i]=arr[left];
//         i++;
//       res[i]=arr[left];
//         i++;
//         left++;
//         right--;
        
        
//     }
//     for(int i=0;i<n;i++)
//     {
//         arr[i]=res[i];
//     }
{ int i=0,j=n-1,k=1;
     vector<int> v;
     while(i<=j)
     {
         if(k%2!=0){
         v.push_back(arr[j]);
         j--;
         }
         else
         {
         v.push_back(arr[i]);
         i++;
         }
         k++;
     }
     for(int i=0 ; i<n ; i++)
     {
         arr[i] = v[i];
     }
    	
    	// Your code here
    	 
    }
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends