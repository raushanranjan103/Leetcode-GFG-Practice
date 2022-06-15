// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long>,greater<long>>pq(arr,arr+n);
        long long sum=0;
       while(pq.size()>=2)
       {
           long long c1=pq.top();
           pq.pop();
           long long c2=pq.top();
           pq.pop();
            sum+=c1+c2;
           pq.push(c1+c2);
       }
       return sum;
        // Your code here
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends