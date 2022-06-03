class Solution {
public:
    int kthFactor(int n, int k) {
        int a[1001]={0};
        int j=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                a[j++]=i;
            }
            
            
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                c++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        if(c<k)
        {
            return -1;
        }
        else
            return a[k-1];
        
        
    }
};