// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
         vector<int> result;
       unordered_map<int,int> res;
       
       for(int i = 0; i < n; ++i) {
           res[arr[i]]++;
       }
       int flag=0;
       
       for(int i = 0; i < n; ++i) {
           if(res[arr[i]]>1) 
           { flag=i;
           break;
       }
       else
       {
           flag=-2;
       }
       }
       
       return flag+1;
        // code here
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends