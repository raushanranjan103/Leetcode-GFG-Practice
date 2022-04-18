// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {  int maxlen=0; 
         stack <int> ss;
         ss.push(-1);
         for (int i=0; i< s.length(); i++){
           if (s[i] == '(') ss.push(i);
           else{
               ss.pop();
           if (ss.empty()) ss.push(i);
          else maxlen= max (maxlen, i-ss.top());
          }
        }
        return maxlen;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends