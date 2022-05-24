class Solution {
public:
    int longestValidParentheses(string s) {
        if(s=="")
            return 0;
        int m = 0;

    	stack<int> st;
        st.push(-1);

    	for(int i = 0; i < s.size(); i++)
	    	if(s[i] == '(')
                st.push(i);

    		else {       
	    		st.pop();

		    	if(st.empty())
                    st.push(i);
    			else
                    m = max(m, i - st.top());
    		}        
        
	    return m;
    }
        
    
};