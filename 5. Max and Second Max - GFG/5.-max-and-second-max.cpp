// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int s, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
 set<int>sa;
 for(int i=0;i<s;i++)
 {
     sa.insert(arr[i]);
 }
 vector<int>v;
 for (auto itr = sa.begin(); itr != sa.end(); itr++) {
       v.push_back(*itr);
    }
    
    sort(v.begin(),v.end(),greater<int>());
    if(v[1]==0)
    {
        v[1]=-1;
    }
    return v;
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends