// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {  
	    int merge[n+m]; 
       int i = 0;
       int j=0;
       int k=0;
       
       while(i<n && j<m){
           if(arr1[i]<arr2[j]){
               merge[k] = arr1[i];
               i++;
               k++;
           }
           else{
               merge[k] = arr2[j];
               j++;
               k++;
           }
       }
       while(i<n){
           merge[k] = arr1[i];
           i++;
           k++;
       }
       while(j<m){
           merge[k] = arr2[j];
           j++;
           k++;
       }
       // this loop use to avoid extra space
 for(i=0;i<n;i++){
     arr1[i]=merge[i];
 }
 for(i=0,j=n;i<m;i++){
     arr2[i]=merge[j++];
 }
	    // code here
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends