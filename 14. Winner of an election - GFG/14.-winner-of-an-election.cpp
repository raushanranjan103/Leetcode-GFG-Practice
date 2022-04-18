// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {    map<string,int>m;
       for(int i =0;i<n;i++){
           m[arr[i]]++;
       }
       int mx =-1;
       vector<string>vec(2);
       string ans ="";
       for(auto pr:m){
           if(pr.second>mx){
               mx = pr.second;
               ans = pr.first;
           }
       }
       vec[0]= ans;
       vec[1]=to_string(mx);
       
       return vec;
         
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends