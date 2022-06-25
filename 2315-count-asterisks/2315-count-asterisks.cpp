class Solution {
public:
   int countAsterisks(string s) {
        bool flag=false;
        int ans=0;
        for(int i=0; i< s.length(); i++){
            if(s[i]=='|')
                flag=!flag;
            else if(!flag && s[i]=='*')
                ans++;            
        }
        return ans;
        
    }
};