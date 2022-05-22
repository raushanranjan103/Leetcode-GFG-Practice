// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
   string removePair(string str)
    {
        // Your code here
        if(str.size() == 1) return str;
        
        int n = str.size();
        stack<char> s;
        string res = "";
        
        for(int i = n-1; i > -1; --i) {
            if(s.empty() or s.top() != str[i]) {
                s.push(str[i]);
            }
            
            else if(s.top() == str[i]) {
                s.pop();
            }
        }
        while(!s.empty()) {
            res = res + s.top();
            s.pop();
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends