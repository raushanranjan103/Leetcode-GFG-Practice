// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int a[], int n, int k) {
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++)
        // {
        //     mp[arr[i]]++;
        // }
        // int c=0;
        // for(auto x:mp)
        // {
        //     if(x.second>n/k)
        //     c++;
        // }
        // return c;
      
       
    sort(a,a+n); 
  
   int count=1,ans=0,t=0;
   
   for(int i=1;i<n;i++){
       if(a[i]==a[i-1]&&a[i]!=t){
           count++;
       }else{
           count=1;
       }
       if(count>n/k){
           ans++;
           t=a[i];
       }
   }
  
      return ans; 
   
    
        // Your code here
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends