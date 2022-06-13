// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
static bool com(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}
       
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({abs(x-arr[i]),arr[i]});
        }
        sort(v.begin(),v.end(),com);
        vector<int> final;
        for(int i=0;final.size()<k;i++){
            if(v[i].first!=0){
                final.push_back(v[i].second);
            }
        }
        return final;

    
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends