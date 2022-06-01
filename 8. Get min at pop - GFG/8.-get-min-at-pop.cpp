// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{  stack<int>s;
   for(int i=0;i<n;i++){
       s.push(arr[i]);
   }
   return s;
}
int getMin(stack<int>s){
    int ans=INT_MAX;
    while(!s.empty()){
        ans=min(ans,s.top());
            s.pop();
        }
   return ans; 
}
void _getMinAtPop(stack<int>s)
{
    int x;
    while(!s.empty()){
        x=getMin(s);
        s.pop();
        cout<<x<<" ";
    }  
}
// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends