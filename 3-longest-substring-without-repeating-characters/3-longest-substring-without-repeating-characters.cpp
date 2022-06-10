class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int len = 0, l = 0, r = 0, size = s.length();
        deque<char> se;
        while (r < size)
        {
            if (find(se.begin(), se.end(), s[r])!=se.end()) {
               se.pop_front();
                l++;
            }
            else {
               
                 se.push_back(s[r]);
                len = max(len, r - l + 1);
                r++;
            }
        }
        return len;
        
    }
};