// { Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    {// { int j=0;
    // for(int i=0;i<txt.length()&&j<pat.length();i++)
    // {
    //     if(pat[i]==txt[i])
    //     {
    //         j++;
            
    //     }
    //     else
    //     j=0;
    // }
    // if(j==pat.length())
    // return true;
    // else
    // return false;
   int j = 0;
    	for(int i  = 0; i< txt.length(); i++)
    	{
    	    if(txt[i] == pat[j])
    	    {
    	        j++;
    	    }
    	    else{
    	        j = 0;
    	    }
    	    if(j == pat.length())
    	        return true;
    	}
    	return false;
    	
    } 
};




// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}  // } Driver Code Ends