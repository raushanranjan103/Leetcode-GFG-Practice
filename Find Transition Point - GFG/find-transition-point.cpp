// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
     int low=0;
  int high=n-1;
  int res=-1;
  while(low<=high)
  {
      int mid=low + (high-low)/2;
      if(arr[mid]==1)
      {
          res=mid;
          high=mid-1;
      }
      else
      {
          low=mid+1;
      }
  }
  return res;
    // code here
}