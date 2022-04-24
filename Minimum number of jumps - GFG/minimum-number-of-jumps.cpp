// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int a[], int n){
         int jumps=0,i=0;
        if(n==1) return 0;
        while(i<n){
            int curr=i,next=i,steps=a[i];
            i++;
            jumps++;
            while(steps--){
                if(i+a[i]>next+a[next])
                    next=i;
                if(next>=n-1)
                    return jumps;
                i++;
            }
            if(curr==next)
                return -1;
            i=next;
        }
        return -1;
    }
};

 
// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends