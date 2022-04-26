// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {map<char,int>m;
     for(int i=0;i<s.length();i++){
         m[s[i]]++;
     }
     for(auto it=m.begin();it!=m.end();it++){
         if(it->second>1){
             return 0;
         }
     }
     return 1;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends