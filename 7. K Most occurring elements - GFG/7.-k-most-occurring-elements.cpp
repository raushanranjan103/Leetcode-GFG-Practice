// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
// Function to print the k numbers with most occurrences 

class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { unordered_map<int,int>mpp;
     for(int i=0;i<n;i++)
     mpp[arr[i]]++;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   for(auto i:mpp)
   {
       pq.push({i.second,i.first});
       if(pq.size()>k)
       {
           pq.pop();
       }

}   
int sum=0;
while(pq.size()>0)
{ sum+=pq.top().first;
pq.pop();
    
}
return sum;
    } 
};

// { Driver Code Starts.
// Driver program to test above 
int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
  // } Driver Code Ends