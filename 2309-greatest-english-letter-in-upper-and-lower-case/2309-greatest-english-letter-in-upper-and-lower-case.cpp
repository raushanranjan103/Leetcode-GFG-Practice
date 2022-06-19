class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>st;
        sort(s.begin(),s.end(),greater<int>());//because we need grt value at the end 
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        string temp="";
        string k="";
        
        for(int i=0;i<s.size();i++)
        {
            char k=tolower(s[i]);
            char l=toupper(s[i]);
            if(st.find(k)!=st.end()&&st.find(l)!=st.end())
            {temp=l;//we are storing upper case letter everytime so it will find the largest as its sorted in increasing order
             break;
            
                
            }
        }
        return temp;
    }
};