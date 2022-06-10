class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int len = 0, l = 0, r = 0, size = s.length();
        deque<char> seen;
        while (r < size)
        {
            if (find(seen.begin(), seen.end(), s[r])!=seen.end()) {
               seen.pop_front();
                l++;
            }
            else {
               
                 seen.push_back(s[r]);
                len = max(len, r - l + 1);
                r++;
            }
        }
        return len;
        
    }
};