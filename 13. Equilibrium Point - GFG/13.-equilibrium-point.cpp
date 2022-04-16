// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        if(n==1)
        return 1;
        if(n==2)
        return -1;
        int left=0,right=n-1;
        int sum1=0,sum2=0;
      while(left<=right)
      
        {if(sum1==sum2&&(left==right))
        return left+1;
         if(sum1<sum2){
               sum1=sum1+arr[left];
               left++;
           }
           else{
               sum2=sum2+arr[right];
               right--;
           }
            
            
            
        //     sum1+=a[left];
        // sum2+=a[right];
        // left++;
        // right--;
        // if(sum1==sum2)
        // return (left+1);
        
            
        }
        return -1;
    
        // Your code here
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends