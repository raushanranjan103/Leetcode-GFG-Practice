// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    {   int i=0;
      int j=i;
      int ans=0;
      while(j<N){
          if(A[i]<=A[j]) ans=max(ans,j-i);
          else if(j==N-1){
              i++;
              j=i;
              
          }
          j++;
      }
      return ans;
    }
    // { int maxDiff = -1;
    // int i=0, j=0;

    // for (i = 0; i < N; ++i) {
    //     for (j = N - 1; j > i; --j) {
    //         if (A[j] > A[i]&&maxDiff<(j - i))
    //             maxDiff = j-i;
    // }
    // }
    // return maxDiff;}
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends