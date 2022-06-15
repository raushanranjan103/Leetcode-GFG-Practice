// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int k){
         priority_queue<int, vector<int>, greater<int>>pqq;
        
        vector<int> res;
        
        for (int i=0; i<num; i++) {
            pqq.push(arr[i]);
            
            if (pqq.size()>k) {
                res.push_back(pqq.top());
                pqq.pop();
            }
        }
        
        while(pqq.size()) {
            res.push_back(pqq.top());
            pqq.pop();
        }
        
        return res;
    
        // Your code here
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends