class Solution {
public:
    bool isUgly(int n) {
//         if(n<=1)
//             return true;
//         set<int>r;
//         for(int i=2;i<=n;i++)
//         {
//             if(n%i==0)
//             {
//                 r.insert(i);
//                 n=n/i;
//             }
//         }
//         int flag=0;
//         for(int i=0;i<r.size();i++)
//         {
//             if(r.find(2)==end||r.find(3)==end||r.find(5)==end)
//             {
//                flag=1;
                
//             }
//             else
//             {
//                 continue;
//             }
//         }
//         if(flag==0)
//             return true;
//         else
//             return false;
        if(n==0)
            return false;
        else
        {
            while(n%2==0)
            {
                n=n/2;
            }
              while(n%3==0)
            {
                n=n/3;
            }
              while(n%5==0)
            {
                n=n/5;
            }
            if(n==1)
                return true;
            else
                return false;
        }
        
    }
};