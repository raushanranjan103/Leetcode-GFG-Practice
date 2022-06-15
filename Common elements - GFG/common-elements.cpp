// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
      {  // {set<int>inp;
        // vector<int>ans;
        // for(int i=0;i<n1;i++)
        // {
        //     inp.input(a[i]);
        // }
        // set<int>s2;
        // for(int i=0;i<n2;i++)
        // {
        //     if(inp.find(b[i])!=inp.end())
        //     {
        //       s2.insert(b[i]);
        //     }
        // }
        // for(int i=0;i<n2;i++)
        // {
        //     if(inp.find(c[i])!=inp.end())
        //     {
        //       s2.insert(c[i]);
        //     }
        // }
         int i=0;
           int j=0;
           int k=0;
           vector<int> v;
           set<int> s;
           while(i<n1 && j<n2 && k<n3){
               if(A[i]==B[j] && B[j]==C[k]){
                   //v.push_back(A[i]);
                   s.insert(A[i]);
                   i++;
                   j++;
                   k++;
               }
               else{
                   if(A[i]<B[j]){
                       i++;
                   }
                   else if(B[j]<C[k]){
                       j++;
                   }
                   else{
                       k++;
                   }
               }
           }
           for(int i:s){
               v.push_back(i);
           }
           return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends