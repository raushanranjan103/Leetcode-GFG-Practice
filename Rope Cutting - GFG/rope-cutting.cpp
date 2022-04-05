// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {vector<int> res;
       sort(arr,arr+n);
       int cut = arr[0];
       for(int i=0; i<n; i++){
           
           if(arr[i]-cut >0 ){
              res.push_back(n-i);
           }
           cut = arr[i];
       }
       
       return res;
        // Complete the function
    }
};

// { Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}  // } Driver Code Ends