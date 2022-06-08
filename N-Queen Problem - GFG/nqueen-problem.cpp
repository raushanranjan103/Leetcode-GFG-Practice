// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   bool isSafe(vector<vector<int>> &M,int n,int row,int col){
       //vertical
       for(int i=0;i<n;i++){
           if(M[i][col]==1){
               return false;
           }
       }
       //horizontal
       for(int j=col;j>=0;j--){
           if(M[row][j]==1){
               return false;
           }
       }
       //upper left
       for(int i=row,j=col;i>=0 && j>=0;i--,j--){
           if(M[i][j]==1){
               return false;
           }
       }
       //down left
       for(int i=row,j=col;i<n && j>=0;i++,j--){
           if(M[i][j]==1){
               return false;
           }
       }
       
       return true;
       
   }

   void solve(vector<vector<int>> &M,int n,vector<int> &pos,vector<vector<int>> &res,int col){
       if(col==n){
           res.push_back(pos);
           return;
       }
       for(int row=0;row<n;row++){
           if(isSafe(M,n,row,col)){
               M[row][col]=1;
               pos.push_back(row+1);
               solve(M,n,pos,res,col+1);
               pos.pop_back();
               M[row][col]=0;
           }
           
           
       }
       return;
   }

 

   vector<vector<int>> nQueen(int n) {
       // code here
       vector<vector<int>> M(n,vector<int>(n,0));
       vector<vector<int>> res;
       vector<int> pos;
       solve(M,n,pos,res,0);
       return res;
       
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends