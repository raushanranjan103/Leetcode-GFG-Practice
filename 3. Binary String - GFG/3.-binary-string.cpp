// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        long c = 0;
        //We need to select 2 1s out of count so nC2 n(n-1)/2;
        for(auto x : a)
        {
            if(x == '1')    
                c++;
        }
        return (c*(c-1))/2;
        
    }

};

// { Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}
  // } Driver Code Ends