// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        
        // Your code here
        map<char,int>m;
        sort(str.begin(),str.end());
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        char ans;
        int max=INT_MIN;
        for(auto it:m){
            if(it.second>max){
                max=it.second;
                ans=it.first;
            }
        }
     return ans;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends