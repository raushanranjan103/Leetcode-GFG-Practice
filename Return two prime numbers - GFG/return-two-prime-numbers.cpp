// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int n){
        //sieve
     vector<int> prime(n+1 , 1);
       prime[0] = prime[1] = 0;
       
       for(int  i =  2 ; i <= sqrt(n) ;i++ )
       {
           for(int  j = 2 ; j*i < n ; j++ )
           {
               prime[i*j] = 0;
           }
       }
       
       for(int i = 2 ; i <= n ; i++)
       {
           if(prime[i] == 1 && prime[n-i] == 1 )
           {
               return {i , n-i};
           }
       }
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends