// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string expr)
    // { if(x[0]==')' || x[0]=='}' || x[0]==']') return false;
    //     int n=x.length();
    //     if(x[n-1]=='(' || x[n-1]=='{' || x[n-1]=='[') return false;
    //   string res;
    //   stack<char>s;
    //   s.push(x[0]);
    //   bool flag=false;
    //   for(int i=1;i<n;i++)
    //   {
    //       if(x[i]=='('||x[i]=='['||x[i]=='{')
    //       s.push(x[i]);
    //       else if(x[i]==')'&&s.top()=='('&&!s.empty())
    //       {
    //           s.pop();
    //           flag=true;
    //       }
    //         else if(x[i]==']'&&s.top()=='['&&!s.empty())
    //       {
    //           s.pop();
    //           flag=true;
    //       }
    //         else if(x[i]=='}'&&s.top()=='{'&&!s.empty())
    //       {
    //           s.pop();
    //           flag=true;
    //       }
    //       else
    //       {
    //           return false;
    //       }
    //   }
    //   if(flag ==true&&s.empty()==true)
    //   return true;
    //   else
    //   return false;
    // }
     {stack<char> temp;
        for(int i=0;i<expr.length();i++)
        {
            if(temp.empty())
            {
                temp.push(expr[i]);
            }
            else if((temp.top()=='('&& expr[i]==')')  ||  (temp.top()=='{' && expr[i]=='}')  ||  (temp.top()=='[' && expr[i]==']'))
            {
                temp.pop();
            }
            else
            {
                temp.push(expr[i]);
            }
        }
        if(temp.empty())
        {
            return true;
        }
        return false;
     }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends