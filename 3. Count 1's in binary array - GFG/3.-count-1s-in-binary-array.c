// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int a[], int n)
{int l=0,h=n-1,mid=0;
while(l<=h)
{
    mid=(l+h)/2;
    if(a[mid]==0)
    h=mid-1;
   
   else{
       if(a[mid]==1&&a[mid]!=a[mid+1])
    return (mid+1);
    else
    {
        l=mid+1;
    }
    
}
}

}


// { Driver Code Starts.

int main(){
    
    int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int *a;
		a = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);

		printf("%d\n", countOnes(a, n) );
	}
	return 0;
	
}
  // } Driver Code Ends