class Solution {
public:
    int fib(int n) {
                 if(n==0|n==1)
                     return n;
        int fibb[n+1];
          fibb[0]=0,fibb[1]=1;
        for(int i=2;i<=n;i++)
        {fibb[i]=fibb[i-1]+fibb[i-2];
            
        }
        return fibb[n];
    }
};