// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int a[],int n)
    {int temp[n];
    int c1=0,c2=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            temp[k]=a[i];
            k++;
        }
        else
        {c2++;
            continue;
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
    {if(a[i]>=0)
        {a[res]=a[i];
        res++;
        }
    }
    int j=0;
    for(int i=res;i<n;i++)
    {
        a[i]=temp[j];
        j++;
    }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends