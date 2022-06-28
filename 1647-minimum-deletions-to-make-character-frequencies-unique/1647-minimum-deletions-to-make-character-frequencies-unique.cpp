class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {mp[s[i]]++;
            
        }
        set<int>st;
        int c1=0;
        for(auto c:mp)
        {while(st.find(c.second)!=st.end())
        {c.second--;
         c1++;
        }
         if(c.second>0)
         st.insert(c.second);
         
            
        }
        cout<<c1<<endl;
        return c1;
    }
};