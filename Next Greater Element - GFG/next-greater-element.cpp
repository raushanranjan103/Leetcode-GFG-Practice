// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long >res;
       
        stack<long long int>s;
        s.push(arr[n-1]);
        res.push_back(-1);
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false&&s.top()<=arr[i])
            {
                s.pop();
            }
            long long int pg=s.empty()?-1:s.top();
        res.push_back(pg);
        s.push(arr[i]);
        }
        reverse(res.begin(),res.end());
        return res;
        // Your code here
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
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends