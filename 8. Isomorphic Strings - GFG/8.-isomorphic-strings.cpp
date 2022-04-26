// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
       int mp1[26], mp2[26];
       if(str1.length() != str2.length()) return (false);
       
       memset(mp1,-1,sizeof(mp1));
       memset(mp2,-1,sizeof(mp2));
       
       for(int i = 0; i < str1.length(); i++){
           char ch1 = str1[i];
           char ch2 = str2[i];
           if(mp1[ch1-'a'] != -1 && mp1[ch1-'a'] != ch2){
               return (false);
           }
           if(mp2[ch2-'a'] != -1 && mp2[ch2-'a'] != ch1){
               return (false);
           }
           mp1[ch1-'a'] = ch2;
           mp2[ch2-'a'] = ch1;
       }
       return(true);
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends