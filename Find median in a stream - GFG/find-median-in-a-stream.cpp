// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
     priority_queue<int> lo;                              // max heap
   priority_queue<int, vector<int>, greater<int>> hi;   // min heap
   public:
   //Function to insert heap.
   void insertHeap(int &num)
   {
       lo.push(num);                                    // Add to max heap

       hi.push(lo.top());                               // balancing step
       lo.pop();

       if (lo.size() < hi.size()) {                     // maintain size property
           lo.push(hi.top());
           hi.pop();
       }
   }
   
  
   //Function to return Median.
   double getMedian()
   {
       return lo.size() > hi.size() ? lo.top() : ((double) lo.top() + hi.top()) * 0.5;
   }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends