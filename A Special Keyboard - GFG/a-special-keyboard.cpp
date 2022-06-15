// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string s1, string s2) {
         map<char,int> aa;
        for(int i=0;i<s1.length();i++){
            aa[s1[i]]=i;
        }
        int ans=0,c=0;
        for(int i=0;i<s2.length();i++){
            ans+=abs(aa[s2[i]]-c);
            c=aa[s2[i]];
        }
        return ans;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends