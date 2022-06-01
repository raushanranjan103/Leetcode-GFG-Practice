// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
   vector<int> nextSmaller(long long arr[], int n){
        stack<int> s;
        
        vector<int> ans(n);
        
        for(int i = n-1; i>=0; i--){
            int curr = arr[i];
            
            while(s.empty()==false && arr[s.top()] >= curr){
                s.pop();
            }
            if(s.empty()==true)
            {
                s.push(-1);
            }
            
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmaller(long long arr[], int n){
        stack<int> s;
        s.push(-1);
        
        vector<int> ans(n);
        
        for(int i = 0; i<n; i++){
            int curr = arr[i];
            
            while(s.empty()==false && arr[s.top()] >= curr){
                s.pop();
            }
              if(s.empty()==true)
            {
                s.push(-1);
            }
            
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<int> next(n);
        next = nextSmaller(arr, n);
        
        vector<int> prev(n);
        prev = prevSmaller(arr, n);
        
        long long area = 0;
        
        for(int i=0; i<n; i++){
            long long l = arr[i];
            
            if(next[i]==-1)
            next[i] = n;
            
            long long b = next[i]-prev[i]-1;
            
            long long newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends