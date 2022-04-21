// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > a, int n)
    { int maxRow = INT_MIN ,
        maxCol = INT_MIN , s = 0;
        for(int i = 0 ; i < n ; i++){
            int r = 0 , c = 0;
            for(int j = 0 ; j < n ; j++){
                r += a[i][j];
                c += a[j][i];
                s += a[i][j];
            }
            maxRow = max(maxRow , r);
            maxCol = max(maxCol , c);
        }
        int MAX = max(maxRow , maxCol);
        return (MAX * n) - s;
    } 
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}

  // } Driver Code Ends