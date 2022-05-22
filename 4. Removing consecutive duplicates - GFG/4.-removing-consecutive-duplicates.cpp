// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
       string res;
       stack<char>ss;
       ss.push(s[0]);
       for(int i=1;i<s.size();i++)
       {if(ss.top()!=s[i])
       {
           ss.push(s[i]);
       }
           
       }
       while(!ss.empty())
       {
           res+=ss.top();
           ss.pop();
       }
       reverse(res.begin(),res.end());
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
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends